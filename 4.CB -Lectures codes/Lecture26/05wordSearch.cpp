// g++ -std=c++11 01permutationsSum.cpp  
//./a.out
#include <iostream>
using namespace std;
int dx[]={0,0,-1,1};
int dy[]={1,-1,0,0};
bool searchword(vector<vector<char>>& board,string word,int m,int n,int i,int j,int k){
    //base case
    int size=word.size();
    if(k==size){
        return true;
    }
    if(i==m||j==n||i==-1||j==-1){
        return false;
    }

    if(board[i][j]!=word[k]){
        return false;
    }


    // recursive case
    board[i][j]='#';

    for(int d=0;d<4;d++){
        if(searchword(board,word,m,n,i+dx[d],j+dy[d],k+1)){
            return true;
        }
    }
    board[i][j]=word[k];
    return false;
}
bool exist(vector<vector<char>>& board,string word){
    int m= board.size();
    int n=board[0].size();
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(board[i][j]==word[0]){
                if(searchword(board,word,m,n,i,j,0)){
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {

	vector<vector<char>> board = {
		{'A', 'B', 'C', 'E'},
		{'S', 'F', 'C', 'S'},
		{'A', 'D', 'E', 'E'}
	};

	string word = "ABCCEX";

	exist(board, word) ? cout << "true" << endl :
	                          cout << "false" << endl;

	return 0;
}