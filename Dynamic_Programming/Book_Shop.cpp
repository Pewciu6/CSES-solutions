#include <bits/stdc++.h>
using namespace std;

#define ll long long

const unsigned int mod = 1000000007;

void solve(){

  int n,x; cin >> n >> x;

  vector<int> koszt(n);
  vector<int> value(n);

  for(int i = 0 ; i<n; i++){

    cin >> koszt[i];

  }
  for(int i = 0 ; i<n; i++){

    cin >> value[i];

  }


  vector <vector<int>> dp(n+10, vector<int>(x+10, 0));

  for(int i = 1; i<=n; i++){

    for(int cena = 1; cena<=x; cena++){

      if(cena-koszt[i-1] >= 0) dp[i][cena] = max(dp[i-1][cena], dp[i-1][cena-koszt[i-1]] + value[i-1]);
      else dp[i][cena] = dp[i-1][cena];

    }

  }

  cout << dp[n][x] <<"\n";


}

int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    solve();
}
