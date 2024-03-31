#include <bits/stdc++.h>
using namespace std;
int arr[200001];
int main(){

  int count=0;
  int t;
  cin>>t;

  map <int, int> mapka;

  for(int i=0; i<t; i++)
  {
  	cin>>arr[i];
  	mapka[arr[i]]++;
  }

  for(auto x : mapka)
  {
  	if(x.second!=0)
  	{
  		count++;
  	}
  }
  cout<<count;

  return 0;
}
