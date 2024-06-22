#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;

#define ll long long

void solve(){

	ll n, suma;

	cin >> n >> suma;

	vector <ll> arr(n);
	vector <ll> dp(suma+1, 0);

	for( int i = 0 ; i < n; i++){

		cin >> arr[i];

		if( arr[i] <= suma ) dp[arr[i]] = 1;

	}

	for( int i = 0 ; i <= suma; i++){

		if( dp[i] == 0 ) continue;
		else{

			for(auto x : arr){

				if( i + x <= suma ){

					dp[i+x] = (dp[i+x] + dp[i])%mod;

				}

			}

		}

	}

	cout << dp[suma];

}

int main(){

	solve();

}
