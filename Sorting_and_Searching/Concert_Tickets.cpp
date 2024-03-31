#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back();

multiset <int> secik;

void solve(){

    int n,k; cin >> n >> k;

    for(int i = 0 ; i < n; i++){

        int t; cin >> t;
        secik.insert(t);

    }

    for(int i = 0 ; i < k; i++){

        int t; cin >> t;

        auto it = secik.upper_bound(t);

        if( it == secik.begin()){

            cout << "-1"<<"\n";
            continue;

        }
        else{

            cout << *(--it)<<"\n";
            secik.erase(it);

        }

    }





    }

  int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    solve();
  }
