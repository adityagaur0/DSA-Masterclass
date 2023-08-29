#include <iostream>
using namespace std;
int reverse(int arr[],int n){
    for(int i=0;i<n/2;i++){
        swap(arr[i],arr[n-i-1]);
    }


}
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];

    }
    int n=sizeof(arr)/sizeof(int);
    reverse(arr,n);
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }


}