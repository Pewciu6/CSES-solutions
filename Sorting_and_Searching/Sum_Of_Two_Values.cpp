#include <bits/stdc++.h>
using namespace std;

int main()
{

	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

	int n,m; cin>>n>>m;

	vector <pair<int,int>> nums;

	for(int i = 0 ; i < n; i++)
	{
		int x;
		cin>>x;
		nums.push_back({x,i+1});
	}

	sort(nums.begin(), nums.end());

	int l = 0, r = nums.size()-1;

	while(l<r)
	{

	if(nums[l].first+nums[r].first==m){
		 cout<<nums[l].second<<" "<<nums[r].second;
		 return 0;
	 }
	else if(nums[l].first+nums[r].first>m) r--;
	else l++;

	}

	cout<<"IMPOSSIBLE";

}
