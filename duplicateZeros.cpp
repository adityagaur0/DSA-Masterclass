#include <iostream>
using namespace std;
void dupeZeros(int arr[], int n) {
    int i = 0; 
    int k=0; // This variable will track the position in the new array
    int brr[n];
    while (i <n) {
        if(arr[i]==0){
            brr[k]=arr[i];
            brr[k+1]=0;
            k+=2;
        }else{
            brr[k]=arr[i];
            k++;
        }
        i++;

    }
    

    for (int i = 0; i < n; i++) {
        cout << brr[i] << " ";
    }
}
void dupeZeros2(int arr[], int n) {
   //int i = 0; 
    //int k=0; // This variable will track the position in the new array
    //int brr[n];
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            int temp=0;
            for(int j=0;j<n;j++){
                arr[n-j]=arr[n-j-1];
            }
            arr[0]=temp;
            break;
            
        }
    
    }
    

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
void dupeZeros3(int arr[], int n) {
    int i = 0;
    int temp=arr[0]; 
    for(int i=0;i<n;i++){
        arr[n-i]=arr[n-i-1];
    }
    arr[0]=temp;
    

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {0,1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(int);
    //output = 0,0,2,3,0,0,5;
    dupeZeros2(arr, n);
    return 0;
}
