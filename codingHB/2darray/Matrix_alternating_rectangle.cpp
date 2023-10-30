// Input: m = 3, n = 3
// Output: Following matrix 
// X X X
// X 0 X
// X X X

// Input: m = 4, n = 5
// Output: Following matrix
// X X X X X
// X 0 0 0 X
// X 0 0 0 X
// X X X X X

// Input:  m = 5, n = 5
// Output: Following matrix
// X X X X X
// X 0 0 0 X
// X 0 X 0 X
// X 0 0 0 X
// X X X X X

// Input:  m = 6, n = 7
// Output: Following matrix
// X X X X X X X
// X 0 0 0 0 0 X
// X 0 X X X 0 X
// X 0 X X X 0 X
// X 0 0 0 0 0 X
// X X X X X X X 

#include <iostream>
using namespace std;

void matrix(int m, int n) {
    char arr[1000][1000];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
			arr[i][j]='0';

        }
    }
	int count=0;
	int total=m*n;
	int startrow=0;
	int endrow=m-1;
	int startcol=0;
	int endcol=n-1;
	while(count<total){
		if(startrow%2==0||startcol%2==0){
			for(int i=startcol;count<total&&i<=endcol;i++){
				arr[startrow][i]='X';
				count++;
			}
			startrow++;
			for(int i=startrow;count<total&&i<=endrow;i++){
				arr[i][endcol]='X';
				count++;
			}
			endcol--;
			for(int i=endcol;count<total&&i>=startcol;i--){
				arr[endrow][i]='X';
				count++;
			}
			endrow--;
			for(int i=endrow;count<total&&i>=startrow;i--){
				arr[i][startcol]='X';
				count++;
			}
			startcol++;
		}
		else if(startrow%2!=0||startcol%2!=0){
			for(int i=startcol;count<total&&i<=endcol;i++){
				arr[startrow][i]='0';
				count++;
			}
			startrow++;
			for(int i=startrow;count<total&&i<=endrow;i++){
				arr[i][endcol]='0';
				count++;
			}
			endcol--;
			for(int i=endcol;count<total&&i>=startcol;i--){
				arr[endrow][i]='0';
				count++;
			}
			endrow--;
			for(int i=endrow;count<total&&i>=startrow;i--){
				arr[i][startcol]='0';
				count++;
			}
			startcol++;
		}
	}

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j];
            if (j != n - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int m, n;
    cin >> m >> n;
    matrix(m, n);
    return 0;
}
