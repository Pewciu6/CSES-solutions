#include <bits/stdc++.h>
using namespace std;
#define start cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);

#define ll long long

int main(){

	start
	long long ans = 0;

	int n,k;
	cin>>n>>k;

	vector <int> nums(n);

	for(int i = 0 ; i < n; i++){

		cin>>nums[i];

	}

	int i = 0, j = 0;

	long long sum = 0;

	for(int i = 0 ; i < n; i++){

		sum += nums[i];

		while(sum >= k){

			if(sum == k)
			{
				ans++;
				break;
			}

			else
			{
				sum -= nums[j];
				j++;
			}

		}

	}

	cout<<ans<<"\n";

}
