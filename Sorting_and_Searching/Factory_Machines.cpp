#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back();

ll n,k;
vector<int> arr;

bool check(ll x){

    long double count = 0;

    for(int i = 0 ; i < n; i++){

        count += floor(x/arr[i]);

        if(count >= k) return true;

    }

    return false;

}

void solve(){

  cin >> n >> k;

  for(int i = 0 ; i < n; i++){

      int a; cin >> a;
      arr.push_back(a);

  }

  ll l = 0, r = 1e18;

  while( l <= r){

      ll mid = (l+r)/2;

      if(check(mid) == true) r = mid-1;
      else l = mid+1;

  }

  cout << l;

}

  int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    solve();
  }
