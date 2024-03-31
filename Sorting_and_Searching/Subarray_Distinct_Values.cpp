#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back();

void solve(){


    int t, k; cin >> t >> k;

    vector <int> v(t);
    map <int,int> mapka;

    for(int i = 0 ; i < t; i++){
      cin >> v[i];
      mapka[v[i]] = 0;
    }

    ll cnt = 0, ans = 0, j = 0;

    for( int i = 0 ; i < t; i++ ){

      mapka[v[i]]++;

      if( mapka[v[i]] == 1 ) cnt ++;

      while( cnt > k){

          mapka[v[j]]--;

          if( mapka[v[j]] == 0 ) cnt--;

          j++;

      }

      ans += i-j+1;

    }

    cout << ans;

}

  int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    solve();
  }
