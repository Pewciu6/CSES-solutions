#include <bits/stdc++.h>
using namespace std;

#define ll long long

const unsigned int mod = 1000000007;

void solve(){

  int n, x;
  cin >> n >> x;

  vector<int> v(n);
  for(int i = 0 ; i < n; i++ ){
    cin >> v[i];
  }

  vector <int> dp(x+1, 0);
  dp[0] = 1;

  for( int j = 0 ; j < n; j++){

    for( int value = 1; value <= x; value++){

      if(value-v[j] >= 0) dp[value] = (dp[value] + dp[value-v[j]])%mod;

    }

  }

  cout << dp[x] <<"\n";

}

int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    solve();
}
