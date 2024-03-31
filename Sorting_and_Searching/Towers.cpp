#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

void solve(){

int t; cin >> t;

int temp; cin >> temp;

vector <int> tower{temp};

for(int i = 0 ; i < t-1; i++){

	cin >> temp;

	auto j = upper_bound(tower.begin(), tower.end(), temp);

	if(j == tower.end()) tower.pb(temp);
	else tower[j-tower.begin()] = temp;

}

cout << tower.size();

}

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0);
  cout.tie(0);

	solve();

	return 0;
}
