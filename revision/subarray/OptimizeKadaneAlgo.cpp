#include <iostream>
using namespace std;
int optimiseKadane(int arr[],int n){
    int x=arr[0];
    int maxi=0;
    for(int i=1;i<n;i++){
        x=max(arr[i],x+arr[i]);
        maxi=max(x,maxi);


    }
    cout<<maxi;
    return 0;

}
int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int n=sizeof(arr)/sizeof(n);
    optimiseKadane(arr,n);
    return 0;
}