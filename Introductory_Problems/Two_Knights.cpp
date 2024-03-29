#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back();

void solve(){

    ll t; cin >> t;

    for(ll i = 1; i <= t; i++){

        cout << ((i*i) * (i*i-1) / 2) - 4*(i-1)*(i-2)<<"\n";

    }

  }

  int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    solve();
  }
