#include<iostream>
using namespace std;

void printPascalTriangle(int n) {
    int ans[n][n];
    for (int i = 0; i < n; i++) {
        ans[i][0] = 1;
        ans[i][i] = 1;
        for (int j = 1; j < i; j++) {
            ans[i][j] = ans[i - 1][j] + ans[i - 1][j - 1];
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
