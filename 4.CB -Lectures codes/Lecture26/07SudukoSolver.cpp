#include <iostream>
#include<cmath>
using namespace std;

bool canAssignDigit(int grid[][9],int n,int i,int j,int d){

	// same row or column
	for(int k=0;k<n;k++){
		if(grid[i][k]==d || grid[k][j]==d){
			return false;
		}
	}

	int rn= sqrt(n);
	int sx=(i/rn)*rn;
	int sy=(j/rn)*rn;
	for (int x = sx; x < sx + rn; x++) {
		for (int y = sy; y < sy + rn; y++) {
			if (grid[x][y] == d) {
				return false;
			}
		}
	}

	return true;


}
void solveSudoku(int grid[][9],int n,int i,int j){
    //base case


	if(i==n){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<grid[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		return;
	}

	 //recusive case
	if(j==n){
		solveSudoku(grid,n,i+1,0);
		return;
	}


   
	if(grid[i][j]!=0){
		solveSudoku(grid,n,i,j+1);
		return;
	}
	for(int d=1;d<=9;d++){
		if(canAssignDigit(grid,n,i,j,d)){
			grid[i][j]=d;
			solveSudoku(grid,n,i,j+1);
			grid[i][j]=0; //backtrack
		}
	}
    
}
int main() {

	int n = 9;
	int grid[][9] = {
		{3, 0, 6, 5, 0, 8, 4, 0, 0},
		{5, 2, 0, 0, 0, 0, 0, 0, 0},
		{0, 8, 7, 0, 0, 0, 0, 3, 1},
		{0, 0, 3, 0, 1, 0, 0, 8, 0},
		{9, 0, 0, 8, 6, 3, 0, 0, 5},
		{0, 5, 0, 0, 9, 0, 6, 0, 0},
		{1, 3, 0, 0, 0, 0, 2, 5, 0},
		{0, 0, 0, 0, 0, 0, 0, 7, 4},
		{0, 0, 5, 2, 0, 6, 3, 0, 0}
	};

	solveSudoku(grid, n, 0, 0);

	return 0;
}