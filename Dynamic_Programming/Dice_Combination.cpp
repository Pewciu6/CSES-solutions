#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;

void solve(){

	long long n; cin >> n;

	vector <long long> dp(n+1, 0);

	dp[0] = 1;

	for(int i = 1 ; i <= n; i++){

		for(int j = 1; j <= 6; j++){

			if( i - j >= 0 ) dp[i] = (dp[i]+dp[i-j])%mod;

		}

	}

	cout << dp[n];

}

int main(){

	solve();

}
