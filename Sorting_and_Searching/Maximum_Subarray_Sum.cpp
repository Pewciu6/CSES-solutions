#include <bits/stdc++.h>
long long Arr[200001];
using namespace std;
int main()
{

long long t;
cin>>t;
 
for(int i =0;i<t; i++)
{
cin>>Arr[i];
}

long long sum = Arr[0];
long long global_sum = Arr[0];

for(int i = 1; i<t; i++)
{
	sum=max(Arr[i], Arr[i]+sum);
	if(global_sum<sum) global_sum = sum;
}

cout<<global_sum;

return 0;
}
