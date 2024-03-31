#include <bits/stdc++.h>
using namespace std;
#define start cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);

#define ll long long

int main(){

	start

	int n, key;

	cin>>n>>key;

	vector <int> vectorek(n);

	for(int i = 0 ; i < n; i++){

		cin>>vectorek[i];

	}

	map <ll, int> mapka;

	mapka[0]++;

	ll x, sum = 0, ans=0;

	for(int i = 0; i < n; i++){

		sum += vectorek[i];

		x = sum - key;

		if(mapka.count(x)==1){
			ans+=mapka[x];
		}

		mapka[sum]++;

	}

	cout<<ans<<"\n";

}
