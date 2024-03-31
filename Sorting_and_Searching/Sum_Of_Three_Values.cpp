#include <bits/stdc++.h>
using namespace std;
#define start cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
typedef long long ll;

int main() {

    start

    int n,key;
    cin>>n>>key;

    vector <pair<int,int>> nums(n);

    for(int i =0; i < n; i++){

		int x; cin>>x;

        nums[i] = {x,i+1};

    }

    sort(nums.begin(), nums.end());

    if(n<3)
    {
        cout<<"IMPOSSIBLE";
        return 0;
    }

    int sum = 0;

    for(int i = 0 ; i < n; i++)
    {

        int l = 0, r = n-1;

        sum = key - nums[i].first;

        int local_sum;

        while(l!=r){

			local_sum = nums[l].first + nums[r].first;

			if(local_sum == sum && l!=i && r!=i){

				cout<<nums[l].second<<" "<<nums[i].second<<" " <<nums[r].second;
				return 0;

			}

			else if(local_sum > sum) --r;
			else ++l;

		}
	}

    cout<<"IMPOSSIBLE";
    return 0;

}
 
