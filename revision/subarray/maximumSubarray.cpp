#include <iostream>
using namespace std;
int maxSubArray(int arr[],int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }
            maxi=max(sum,maxi);
        }
    }
    cout<<maxi;
    return 0;

}
int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int n=sizeof(arr)/sizeof(n);
    maxSubArray(arr,n);
    return 0;

}