#include<iostream>

using namespace std;

void matrix(int arr[][], int m, int n) {
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cout << arr[i][j];
    }
  }
}

int main() {
  int m, n;
  int arr[m][n];
  cin >> m >> n;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }
  matrix(arr, m, n);
  return 0;
}
