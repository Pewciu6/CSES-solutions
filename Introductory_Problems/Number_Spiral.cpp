#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back();

void solve(){

  int r,c; cin >> r >> c;

  ll diag = max(r,c);

  diag = diag*diag-(diag-1);

  if( r > c){

    if(r % 2 == 0) diag += r-c;
    else diag -= r-c;

  }
  else if(r < c){

    if(c % 2 == 0) diag -= (c-r);
    else diag += c-r;

  }

  cout << diag <<"\n";

}

  int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t; cin >> t;

    while(t--){solve();}
  }
