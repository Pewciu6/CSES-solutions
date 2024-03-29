#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);
	long long a;
	cin>>a;
	long long wynik=1;

	for(long long i=0; i<a; i++)
	{

		wynik=(2*wynik)%1000000007;

	}
	cout<<wynik;
return 0;
}
