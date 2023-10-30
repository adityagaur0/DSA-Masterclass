#include <iostream>
using namespace std;
int maxiTriplet(int arr[],int n){
    int maxi;
    sort(arr,arr+n);
    int max1=arr[n-1]*arr[n-2]*arr[n-3];
    int max2=arr[0]*arr[1]*arr[n-1];
    if(max1>max2){
        maxi=max1;


    }else{
        maxi=max2;
    }
    return maxi;

}
int main(){
    int arr[]={-10,-20,1,2,3};
    int n=sizeof(arr)/sizeof(int);
    cout<<maxiTriplet(arr,n);

}