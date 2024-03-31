#include <bits/stdc++.h>
using namespace std;
#define start ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long
int main(){

	start

	ll t; cin >> t;
	vector <ll> nums(t);

	for(ll& x : nums) cin >> x;

	sort(nums.begin(), nums.end());

	ll med = nums[t/2];

	ll count = 0;

	for(auto x : nums) count+= abs(med - x);

	cout << count;



}
