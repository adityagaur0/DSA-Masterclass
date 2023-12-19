//same as above question but rat can move up ,down, left right

#include <iostream>
using namespace std;

void f(char maze[][10],char path[][10],int m,int n,int i,int j){
    //base case
    if(i==m||j==n|| i==-1||j==-1){
        return;
    }
    if(i==m-1 && j==n-1){
        path[i][j]='1';
        for(int i=0;i<=m-1;i++){
            for(int j=0;j<=n-1;j++){
                cout<<path[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        path[i][j]='0';
        return;
    }

    if(maze[i][j]=='X'){
        return;
    }

    //to avoid infinite recursions
    if(path[i][j]=='1'){
        return;
    }
    //recursive case

    path[i][j]='1';

    //move right
    f(maze,path,m,n,i,j+1);

    //move left
    f(maze,path,m,n,i,j-1);

    //move down
    f(maze,path,m,n,i+1,j);

    //move down
    f(maze,path,m,n,i-1,j);

    //backtrack
    path[i][j]='0';
}

// int dy[]={1,-1,0,0}; // on the basis on up down left right i used below
// int dx[]={0,0,1,-1};
// void f(char maze[][10],char path[][10],int m,int n,int i,int j){
//     //base case
//     if(i==m||j==n|| i==-1||j==-1){
//         return;
//     }
//     if(i==m-1 && j==n-1){
//         path[i][j]='1';
//         for(int i=0;i<=m-1;i++){
//             for(int j=0;j<=n-1;j++){
//                 cout<<path[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//         cout<<endl;
//         path[i][j]='0';
//         return;
//     }

//     if(maze[i][j]=='X'){
//         return;
//     }

//     // //to avoid infinite recursions
//     // if(path[i][j]=='1'){
//     //     return;
//     // }
//     //recursive case

//     maze[i][j]='X'; // blocking the maze to avoid infinite recursions
//     path[i][j]='1';

//     // //move right
//     // f(maze,path,m,n,i,j+1);

//     // //move left
//     // f(maze,path,m,n,i,j-1);

//     // //move down
//     // f(maze,path,m,n,i+1,j);

//     // //move down
//     // f(maze,path,m,n,i-1,j);

//     for(int d=0;d<4;d++){
//         f(maze,path,m,n,i+dx[d],j+dy[d]);
//     }

//     //backtrack
//     path[i][j]='0';
//     maze[i][j]='0'; // unblocking the maze
// }
int main() {

	char maze[][10] = {"0X00",
	                   "000X",
	                   "X0X0",
	                   "X00X",
	                   "XX00"
	                  };

	char path[][10] = {"0000",
	                   "0000",
	                   "0000",
	                   "0000",
	                   "0000"
	                  };
	int m = 5;
	int n = 4;

	f(maze, path, m, n, 0, 0);
}
