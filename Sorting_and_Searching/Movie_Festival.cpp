#include <bits/stdc++.h>
using namespace std;
#define start ios_base::sync_with_stdio(0);cin.tie(0);

int main(){

	start

	int a; cin >> a;

	vector <pair<int,int>> nums(a);

	for(int i = 0 ; i < a; i++){

		int a,b; cin >>a >> b;
		nums[i] = {b,a};

	}

	sort(nums.begin(), nums.end());

	int temp = -1;

	int count = 0 ;

	for(auto x : nums){

		if(x.second >= temp){

			temp = x.first;
			count++;

		}

	}

	cout << count;;



}
