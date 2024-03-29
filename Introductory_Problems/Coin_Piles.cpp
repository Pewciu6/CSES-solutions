#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back();

void solve(){

    ll t; cin >> t;

    for(int i = 0 ; i < t; i++){

        ll a,b; cin >> a >> b;

          if(a < b) swap(a,b);

            if(a > 2 * b ) cout << "NO" << "\n";
            else{

              a%=3, b%=3;

              if( b > a ) swap(a,b);

              if(a == 2 && b == 1 || a == b && b == 0) cout <<"YES" << "\n";
              else cout << "NO" <<"\n";

        }

    }

  }

  int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    solve();
  }
