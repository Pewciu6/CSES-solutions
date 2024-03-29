#include <iostream>
using namespace std;

int main()
{
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);
	long long a,prev;
	long long t, count=0;
	cin>>t;
	cin>>a;
	prev=a;
	for(int i=0; i<t-1; i++)
	{
		cin>>a;
		if(prev>a)
		{
			count+=prev-a;
			a=prev;
		}
		prev=a;
	}
	cout<<count;
return 0;
}
