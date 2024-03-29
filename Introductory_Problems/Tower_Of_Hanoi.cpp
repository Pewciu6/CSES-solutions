#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back();

vector <pair<int,int>> vectorek;

void hanoi(int n, int skad, int to, int pozostaly){

    if( n == 0 ) return;

    hanoi(n-1, skad, pozostaly, to);
    vectorek.push_back({skad,to});
    hanoi(n-1, pozostaly, to, skad);

}

void solve(){

      int t; cin >> t;

      hanoi(t, 1, 3, 2);

        cout << vectorek.size()<<"\n";

        for(auto x : vectorek) cout << x.first << " " << x.second<<"\n";


  }

int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    solve();
  }
