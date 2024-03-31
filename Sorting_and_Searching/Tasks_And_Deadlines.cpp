#include <bits/stdc++.h>
using namespace std;
#define start ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
int main(){

	start

	ll t; cin >> t;
	vector <pair<int,int>> nums(t);

	for(int i = 0 ; i < t; i++){

		int a,b; cin >> a >> b;

		nums.push_back({a,b});

	}

	sort(nums.begin(), nums.end());

	ll time = 0, ans = 0;

	for(auto x : nums){

		time+=x.first;
		ans += x.second - time;

	}

	cout << ans;


}
