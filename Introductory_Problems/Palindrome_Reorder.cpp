#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back();

vector<ll> a(26);

ll odd = 0;

void solve(){

  string s; cin >> s;

  for(auto x : s) a[x-'A']++;

  for(auto x : a) if(x%2!=0) odd++;

  ll  index = 0;

  vector <char> ans(s.length());

  if( odd > 1){

      cout << "NO SOLUTION" <<"\n";

  }
  else{

    for(int j = 0 ; j < 26; j++){

        if( a[j] % 2 == 0){

          while( a[j] > 0){

              ans[index] = j + 'A';
              ans[s.length()-1-index] = j + 'A';
              index++, a[j]-=2;

          }

        }
        else{

          ans[int(ceil(s.length()/2))] = j+'A';

          while( a[j]-1 > 0){

              ans[index] = j + 'A';
              ans[s.length()-1-index] = j + 'A';
              index++, a[j]-=2;

          }

        }

    }

  }

  for(auto x : ans) cout << x;

  return;

}

  int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    solve();
  }
