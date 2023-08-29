#include <iostream>
using namespace std;
int DNF(int arr[],int n){
    int low=-1;
    int mid=0;
    int high=n;
    while(mid<high){
        if(arr[mid]==0){
            low++;
            swap(arr[mid],arr[low]);
            mid++;
        }else if(arr[mid]==1){
            mid++;
        }else{
            high--;
            swap(arr[high],arr[mid]);
        }

    }
    return 0;
}
int main(){
    int arr[]={1,0,1,2,0,1,2,0,1};
    int n=sizeof(arr)/sizeof(int);
    DNF(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;

     
}