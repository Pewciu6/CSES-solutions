#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll pw_10(int x){

	ll res = 1;
	for(int i = 0; i < x; i++){

		res *= 10;

	}

	return res;

}

void solve(){

	ll k; cin >> k;

	int n = 1;

	while(k > n * 9 * pw_10(n-1)){

			k-= n*9*pw_10(n-1);
			n++;

	}

	ll index = ((k-1) % n);

	ll liczba = (k-1)/n + pw_10(n-1);

	string ans = to_string(liczba);

	cout << ans[index] <<"\n";

}

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t; cin >> t;

	while(t--){
		solve();
	}


}
