#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back();

void solve(){

      ll t; cin >> t;

        if( t == 1 || t == 0){

            cout << " NO";
            return;

        }

      vector <ll> set1;
      vector <ll> set2;

      if( (t*(t+1)/2) % 2 != 0 ) cout << "NO" <<"\n";
      else{

          ll szukana_suma = ((t*(t+1))/4) - t;

            set1.push_back(t);

          for(ll i = t-1; i>=1; i--){

              if( i <= szukana_suma && szukana_suma > 0 ){

                  szukana_suma -= i;
                  set1.push_back(i);

              }
              else set2.push_back(i);

          }

          cout << "YES" << "\n";

          cout<< set1.size()<<"\n";

          for(auto x : set1) cout << x << " ";
          cout << "\n";

          cout<< set2.size()<<"\n";

          for(auto x : set2) cout << x << " ";
          cout << "\n";

      }

  }

  int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    solve();
  }
