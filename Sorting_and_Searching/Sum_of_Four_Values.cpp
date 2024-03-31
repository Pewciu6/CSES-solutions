#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){

  int n, x; cin >> n >> x;

  vector<int> v(n);

  for(int i = 0 ; i < n; i++){

    cin >> v[i];

  }

  unordered_map <int, pair<int,int>> mapka;

  for(int i = 0 ; i < n-1; i++){

    for(int j = i+1; j < n; j++){

      mapka[v[i] + v[j]] = {i,j};

    }

  }

  for(int i = 0 ; i < n-1; i++){

    for(int j = i+1 ; j < n; j++){

      int local_sum = v[i] + v[j];

      if(mapka.find(x-local_sum) != mapka.end()){

        pair <int,int> p = mapka[x-local_sum];

        if(p.first != i && p.first != j && p.second != j && p.second != i){

          cout << p.first+1 <<" "<< p.second+1<<" " << i+1 <<" "<< j+1 <<"\n";
          return;

        }

      }

    }

  }


  cout << "IMPOSSIBLE" <<"\n";


}

int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    solve();
}
