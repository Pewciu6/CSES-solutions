#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back();

void solve(){

    ll t; cin >> t;

    vector<pair<ll,ll>> arr;

    for(int i = 0 ; i < t; i++){

        ll a,b; cin >> a >> b;
        arr.push_back({a,1});
        arr.push_back({b,-1});

    }

      sort(arr.begin(), arr.end());

      ll maksimum_customers = -10, actual_customers = 0;

      for(int i = 0 ; i < arr.size(); i++){

          actual_customers += arr[i].second;

          maksimum_customers = max(maksimum_customers, actual_customers);

      }

      cout << maksimum_customers;

  }

  int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    solve();
  }
