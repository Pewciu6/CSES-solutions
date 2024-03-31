#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back();

void solve(){

    int t; cin >> t;

    vector<pair<int,int>> v(t);

    for(int i = 0 ; i < t; i++){

        int a; cin >> a;
        v[i] = {a,i};

    }

    sort(v.begin(), v.end());

      /*for( auto x : v ){

          cout << x.first << " " << x.second << "\n";

      }*/

      int index = -1, cnt = 1;

      for(auto x : v){

          if( x.second > index){

              index = x.second;
              continue;

          }
          else{

              index = x.second;
              cnt++;
              continue;

          }

      }

      cout << cnt;

  }

  int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    solve();
  }
