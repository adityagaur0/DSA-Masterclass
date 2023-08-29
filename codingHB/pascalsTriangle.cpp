#include<iostream>
using namespace std;

void printPascalTriangle(int n) {
    int ans[n][n];
    //ans [y][x]
    for (int row = 0; row < n; row++) {
        ans[row][0] = 1;
        ans[row][row] = 1;
        for (int col = 1; col < row; col++) {
            ans[row][col] = ans[row - 1][col] + ans[row - 1][col - 1];
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n=5;
    if (n <= 10) {
        printPascalTriangle(n);
    }
    return 0;
}
