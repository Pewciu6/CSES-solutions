#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back();

void solve(){

    ll t; cin >> t;

    ll ans = 0;

    ll Five_power = 5;

    while(Five_power <= t){

      ans += t/Five_power;
      Five_power*=5;

    }

    cout << ans;

  }

  int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    solve();
  }
