#include <iostream>
using namespace std;

int main()
{
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);
	string s;
	cin>>s;
	int maks_suma=0, suma=1;
	for(int i=0; i<=s.length()-1; i++)
	{
		if(s[i]==s[i+1]) suma++;
		else suma=1;
		if(maks_suma<suma) maks_suma = suma;
	}
	cout<<maks_suma;
return 0;
}
