#include <bits/stdc++.h>
using namespace std;


void solve(){

	int t; cin >> t;
	vector <int> vectorek(t);
	for (int i = 0 ; i < t; i++) cin >> vectorek[i];

	sort(vectorek.begin(), vectorek.end());

	long long curr_sum = 0;

	for (int i = 0; i < t; i++){

		if( vectorek[i] > curr_sum + 1 ) break;
		curr_sum += vectorek[i];

	}

	cout << curr_sum + 1;

}

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	solve();

}
