#include <bits/stdc++.h>
using namespace std;
#define start cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);

bool tab[8][8];
int ans;

set <int> columna;
set <int> PosDiagonal;
set <int> NegDiagonal;

void solve(int row){

	if(row == 8){
		++ans;
		return;
	}

	for(int column = 0 ; column < 8; column++){

		if((columna.count(column)==1) || (PosDiagonal.count(column+row)==1) || (NegDiagonal.count(row-column)==1) || (tab[row][column]==false)){
			continue;
		}

		columna.insert(column);
		PosDiagonal.insert(row+column);
		NegDiagonal.insert(row - column);
		tab[row][column]=false;

		solve(row + 1);

		columna.erase(column);
		PosDiagonal.erase(row+column);
		NegDiagonal.erase(row-column);
		tab[row][column]=true;


	}

}

int main(){

start

string x;

for(int i = 0 ; i < 8; i++){
	cin>>x;
	for(int j = 0 ; j < 8; j++){

		tab[i][j] = x[j] != '*';

	}

}

solve(0);

cout<<ans<<"\n";

}
