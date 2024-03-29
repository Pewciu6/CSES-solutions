#include <iostream>
using namespace std;
 
int main()
{
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);
long long x;
cin>>x;
cout<<x<<" ";
while(x!=1)
{
	if(x%2==0) x/=2;
	else x=(x*3)+1;
	cout<<x<<" ";
}
return 0;
}