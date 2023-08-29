#include <iostream>
using namespace std;
int reversearr(int arr[],int n,int i,int j){
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    
    return 0;
}

int rotatenum(int arr[],int n,int k){
    reversearr(arr,n,0,n-1);
    reversearr(arr,n,0,k-1);
    reversearr(arr,n,k,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}

int rotatenumleft(int arr[],int n,int k){
    reversearr(arr,n,0,n-1);
    reversearr(arr,n,0,n-k-1);
    reversearr(arr,n,(n-k),n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

int main(){
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(int);
    //reversearr(arr,n);
    int k;
    cout<<"Enter the times you want to rotate the array: ";
    cin>>k;
    rotatenumleft(arr,n,k);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    return 0;
}