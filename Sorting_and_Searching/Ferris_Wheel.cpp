#include <bits/stdc++.h>
using namespace std;
bool arr[200001];

int main(){

		ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

        int t,k; cin >> t >> k;

        vector <int> tab(t);

        for(int& x : tab) cin >> x;
        sort(tab.begin(), tab.end());

        int i = 0, j = t-1, ans = 0;

        while(i < j){

                if(tab[i] + tab[j] > k) j--;

                else{

                	arr[i] = arr[j] = true;
                	ans++;
                	i++;
                	j--;

                }

        }

        for(int i = 0; i < t; i++){

                if(arr[i] == false) ans++;
        }

        cout << ans;

      return 0;
}
