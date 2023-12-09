/*

Given a m x n maze with some blocked cells (marked with 'X'), and rat that wants to
go from the src (0, 0) to the dst (m-1, n-1) design a recursive algorithm to

	> check if there exists a path from src to dst

such at each step the rat can only move in the right or down direction.

Constraint

 1 <= m, n < 10

Example
	Input :

		maze = {"0000",
	            "00X0",
	            "000X",
	            "0X00"}

	Output :

		true (Yes, a path exist from src to dst)

*/
#include <iostream>
using namespace std;

// bool f(char maze[][10],int m,int n, int i, int j){

//     //base case
//     if(i==m-1 and j==n-1){
//         return true;
//     }
//     if(maze[i][j]=='X'){
//         return false;
//     }
//     if(i==m-1){
//         return f(maze, m, n, i, j + 1);
//     }
//     if(j==n-1){
//         return f(maze, m, n, i + 1, j);
//     }

//     // recursive case
//     bool y =f(maze,m,n,i+1,j);

//     bool x=f(maze,m,n,i,j+1);
//     return x or y;


// }

bool f(char maze[][10],int m,int n,int i,int j){
    if(i==m||j==n){
        return false;
    }
    if(i==m-1&&j==n-1){
        return true;
    }
    if(maze[i][j]=='X'){
        return false;
    }

    return f(maze,m,n,i+1,j) or f(maze,m,n,i,j+1);
}


int main(){
    char maze[][10]={"0000",
	            "00X0",
	            "000X",
	            "0X00"};
    int m=4;
    int n=4;
    f(maze,m,n,0,0)?cout<< "found":cout <<"not found";

}