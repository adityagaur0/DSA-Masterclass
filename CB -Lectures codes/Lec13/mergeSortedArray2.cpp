#include <iostream>
using namespace std;

int sorted(int arr1[], int arr2[], int m, int n) {
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;
    
    while (i >= 0 && j >= 0) {
        if (arr1[i] > arr2[j]) {
            arr1[k] = arr1[i];
            i--;
        } else {
            arr1[k] = arr2[j];
            j--;
        }
        k--;
    }
    
    // If there are remaining elements in arr2, copy them to arr1
    while (j >= 0) {
        arr1[k] = arr2[j];
        k--;
        j--;
    }
    
    for (int i = 0; i < m + n; i++) {
        cout << arr1[i] << " ";
    }
    return 0;
}

int main() {
    int arr1[20];
    int arr2[20];
    int m,n;
    cin>>m>>n;
    for(int i=0;i<m;i++){
        cin>>arr1[i];

    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    sorted(arr1, arr2, m, n);
    return 0;
}
