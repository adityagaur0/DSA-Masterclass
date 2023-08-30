#include <iostream>
using namespace std;
int KadaneAlgo(int arr[],int n){
    int x[100];
    x[0]=arr[0];
    int maxi=0;
    for(int i=1;i<n;i++){
        x[i]=max(arr[i],x[i-1]+arr[i]);
        maxi=max(maxi,x[i]);

    }
    cout<<maxi;

    return 0;

}
int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int n=sizeof(arr)/sizeof(n);
    KadaneAlgo(arr,n);
    return 0;

}