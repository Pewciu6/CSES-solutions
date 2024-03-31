#include <bits/stdc++.h>
using namespace std;

void solve(){

	int t; cin >> t;
	vector <int> vec(t);

	for( int i = 0 ; i <t; i++){
		cin>>vec[i];
	}

	stack<pair<int,int>> s;

	for( int i = 0 ; i < t; i++){

		while(!s.empty() && s.top().first >= vec[i])
		{
			s.pop();
		}

		if(s.empty()) cout << "0 ";
		else cout << s.top().second+1<< " ";

		s.push({vec[i], i});

	}



}

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	solve();

}
