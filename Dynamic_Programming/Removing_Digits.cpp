#include <bits/stdc++.h>
using namespace std;

#define ll long long



void solve(){

  int n; cin >> n;

  vector <int> moves(n+1,0);

  for( int i = n; i>=0; i--){

    if(moves[i]!=0 || i == n){

      string s = to_string(i);

      for(int j = 0; j <s.length(); j++){

          if(moves[i-int(s[j])+48] == 0){

            moves[i-int(s[j])+48] = moves[i]+1;

          }
          else{

            moves[i-int(s[j])+48] = min(moves[i]+1, moves[i-int(s[j])+48]);

          }

      }
    }

    else continue;

  }

  cout << moves[0] <<"\n";

}

int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    solve();
}
