#include <bits/stdc++.h>
using namespace std;
#define start() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
int smallest_dif;
int t;
int weights[20];

ll solve(ll index, ll suma1, ll suma2)
{

	if(index == t)
	{

		return abs(suma1-suma2);

	}

	return min(solve(index+1, suma1+weights[index], suma2),solve(index+1, suma1, suma2+weights[index]));


}

int main(){
start()

cin>>t;
for(int i = 0 ; i < t; i++)
{
	cin>>weights[i];
}

	cout<<solve(0,0,0);

}
