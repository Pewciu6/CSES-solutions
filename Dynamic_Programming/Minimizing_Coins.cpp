#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;

void solve(){

	int k, n; cin >> k >> n;

	vector <int> dp(n+1, -1);

	vector <int> tab(k);

	for( int i = 0 ; i < k; i++){

		cin >> tab[i];

		if(tab[i] <= n) dp[tab[i]] = 1;

	}

	for( int i = 0 ; i <= n; i++){

		if(dp[i] == -1) continue;
		else{

			for(auto x : tab){

				if(i + x <= n ){

					if(dp[i+x] == -1) dp[i+x] = dp[i] + 1;
					else{

						dp[i+x] = min(dp[i+x], dp[i]+1);

					}

				}

			}

		}

	}

	cout << dp[n] <<"\n";

}

int main(){

	solve();

}
