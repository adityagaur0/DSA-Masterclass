#include <iostream>
using namespace std;
int Inverse(int arr[],int n){
    //0 1 2 3 4
    //2 0 4 1 3
    int arr2[n];
    for(int i=0;i<n;i++){
        int p=arr[i];
        arr2[p]=i;

    }
    for(int i=0;i<n;i++){
        cout<<arr2[i];
    }
    return 0;

}
int main(){
    int arr[]={2,0,4,1,3};
    int n=sizeof(arr)/sizeof(int);
    Inverse(arr,n);
    return 0;

}