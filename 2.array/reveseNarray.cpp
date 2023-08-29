
#include <iostream>
#include <vector>
using namespace std;

vector<int> ReverseArray(int arr[], int N) {
    vector<int> arr2(N);
    for(int i=0;i<N;i++){
        arr2[i]=arr[N-1-i];
    }
    return arr2;
}

int main(){
    int arr[]={8,12,0};
    int size=3;
    vector<int> reversed = ReverseArray(arr, size);

    // Print the reversed array
    for (int i = 0; i < size; i++) {
        cout << reversed[i] << " ";
    }
    cout << endl;
}