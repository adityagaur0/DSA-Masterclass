#include <iostream>
using namespace std;
        //0 1 2 3
//arr :   1 2 3 4
//csum: 0 1 3 6 10
    //  0 1 2 3 4
    //csum_i = csum i-1+arr i-1
// int Csum(int arr[],int n){
//     int csum[n+1];
//     csum[0]=0;
//     for(int i=1;i<n+1;i++){
//         csum[i]=csum[i-1]+arr[i-1];
//     }
//     for(int i=0;i<n+1;i++){
//         cout<<csum[i]<<" ";
//     }


// }
int maxArraySum(int arr[],int n){
    int csum[n+1];
    csum[0]=0;
    for(int i=1;i<n+1;i++){
        csum[i]=csum[i-1]+arr[i-1];
    }
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            //0     i-1,i,i+1....... j 
            int sum_ij=csum[j+1]-csum[i-1+1];
            maxi=max(sum_ij,maxi);
        }
    }
    cout<<maxi;
    return 0;

}
int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int n=sizeof(arr)/sizeof(n);
    maxArraySum(arr,n);
    return 0;

}