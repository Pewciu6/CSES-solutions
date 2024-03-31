#include <bits/stdc++.h>
using namespace std;

vector<long long> vec(2e5);

long long n,k;

bool ok( long long max ){

	long long act_suma = 0;

	long long grupy = 0;

	for( auto x : vec){

		if( x > max ) return false;
		if( x + act_suma > max ){

			grupy++;
			act_suma = 0;

		}

		act_suma+=x;

	}

	if( act_suma > 0 ) grupy++;

	return grupy <= k;



}

void solve(){

	long long suma = 0;

	cin >> n >> k;

	for( int i = 0 ; i < n; i++){

		cin >>vec[i];
		suma += vec[i];

	}

	long long l = 0, r = suma;

	long long ans;

	while ( r-l>1 ){

		long long mid = (l+r)/2;

		if( ok(mid) ){

			r = mid;

			ans = mid;

		}
		else l = mid;

	}

	cout << r <<"\n";

}

int main(){

	solve();

}
