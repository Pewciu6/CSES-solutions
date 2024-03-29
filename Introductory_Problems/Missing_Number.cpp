#include <iostream>
using namespace std;

int main()
{
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);
long long t;
cin>>t;
long long suma=0, suma_calosci=t*(t+1)/2;
for(int i=0; i<t-1; i++)
{int a;
	cin>>a;
	suma+=a;
}
cout<<suma_calosci-suma;
return 0;
}
