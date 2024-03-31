#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back();



void solve(){

    int t; cin >> t;

    vector<int> v(t);

      map <int,int> tab;

    for(int i = 0 ; i < t; i++){

        cin >> v[i];

        tab.insert({v[i], 0});

    }

    ll maks_length = -1;
    ll unq = 0;

    ll j = 0;

    for( int i = 0 ; i < t; i++){

        tab[v[i]]++;

        while( tab[v[i]] == 2 ){

            tab[v[j]]--;
            j++;

        }

        maks_length = max(maks_length, i-j+1);

    }

    cout << maks_length;

  }

  int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    solve();
  }
