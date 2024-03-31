#include <bits/stdc++.h>
using namespace std;

#define start cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
typedef long long ll;
int main() {

	start

	int n;
	cin>>n;

	vector <int> nums(n);

	for(int i = 0 ; i < n; i++) cin>>nums[i];

    ll suma=0;

    map <ll, int> mapka;

    ll ans=0;

    mapka[0]++;

    for(int i = 0 ; i < n; i++){

    	suma += nums[i]%n;
    	suma = (suma+n)%n;

    	ans += mapka[suma];

		mapka[suma]++;

    }

    cout<<ans<<"\n";

}
