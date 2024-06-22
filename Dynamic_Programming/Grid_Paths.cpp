#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;

#define ll long long

char tab[1001][1001];

int dp[1005][1005];

void solve(){

	int n; cin >> n;

	for( int i = 0 ; i < n; i++){

		for( int j = 0 ; j < n; j++){

			cin >> tab[i][j];

		}

	}

	dp[0][0] = 1;

	for( int i = 0 ; i < n; i++){

		for( int j = 0 ; j < n; j++){

			if( dp[i][j] != 0 && tab[i][j] == '.'){

				dp[i+1][j] =  (dp[i][j] + dp[i+1][j]) % mod;
				dp[i][j+1] = (dp[i][j] + dp[i][j+1]) % mod;

			}

		}

	}

	if( tab[n-1][n-1] == '.') cout << dp[n-1][n-1];
	else cout << "0";

}

int main(){

	solve();

}
