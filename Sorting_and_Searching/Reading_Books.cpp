#include <bits/stdc++.h>
using namespace std;


void solve(){

  int t; cin >> t;

  vector <int> vec(t);

  long long suma = 0;

  for(int i = 0 ; i < t; i++){

    cin >> vec[i];
    suma += vec[i];

  }

  sort(vec.begin(), vec.end());

  if(suma - vec[t-1] <= vec[t-1]){

    cout << 2*vec[t-1] <<"\n";

  }
  else{
    cout << suma <<"\n";
  }

}

int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    solve();
}
