// #include <iostream>
// #include <cmath>
// using namespace std;

// int GenratesubArr(int n, int arr[], int m) {
//     // iterate all over possible start index
//     // 0 1 2 3 ... n - m
//     for (int i = 0; i <= n - m; i++) {
//         // for each start index i, generate subarray of size m
//         for (int j = i; j < i + m; j++) {
//             cout << arr[j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// int main() {
//     int arr[] = {7, 4, 9, 2, 5};
//     int n = 5;
//     int m = 2;
//     GenratesubArr(n, arr, m);
// }

#include <iostream>
#include <cmath>
using namespace std;

int GenratesubArr(int n, int arr[], int m) {
    // Iterate over possible start index (up to n - m)
    for (int i = 0; i <= n - m; i++) {
        // For each start index i, generate subarray of length m
        int maxVal = arr[i];
        int minVal = arr[i];
        
        for (int j = i + 1; j < i + m; j++) {
            maxVal = max(maxVal, arr[j]);
            minVal = min(minVal, arr[j]);
        }

        cout << "Subarray [" << i << ".." << i + m - 1 << "]: ";
        for (int k = i; k < i + m; k++) {
            cout << arr[k] << " ";
        }
        cout << "Max-Min Difference: " << maxVal - minVal << endl;
    }
    return 0;
}

int main() {
    int arr[] = {7, 4, 9, 2, 5};
    int n = 5;
    sort(arr,arr+n);
    
    int m = 2; // Length of subarray
    
    GenratesubArr(n, arr, m);
}
