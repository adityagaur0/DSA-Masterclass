#include <iostream>
using namespace std;
//BruteForce  TC: O(N^3)
//0<=i<=n-1 & i<=j<=n-1;
int maxi=INT_MIN;
int MaxSubSum(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        for(int j=i;j<=n-1;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
    
                sum+=arr[k];
                //cout<<arr[k];
            }
            maxi=max(maxi,sum);
        }
        //cout<<endl;
    }
    cout<<maxi;
    return 0;

}
//CSUM  TC: O(N^2)
//0<=n<=100
int MaxSubSum2(int arr[],int n){
    int csum[101];
    csum[0]=arr[0];
    for(int i=1;i<n;i++){
        csum[i]=csum[i-1]+arr[i];
    }
    int maxi=INT_MIN;
    for(int i=0;i<=n-1;i++){
        for(int j=i;j<=n-1;j++){
            int sum_ij=csum[j+1]-csum[i];
            maxi=max(sum_ij,maxi);

        }
    }
    cout<<maxi;
    return 0;

}

//kadanes algo  
//method 1  => TC: O(N) || SC : O(N)

int Kadanesalgo(int arr[],int n){
    int x[100];
    int maxi=INT_MIN;
    x[0]=arr[0];
    for(int i=1;i<n;i++){
        x[i]=max(arr[i],x[i-1]+arr[i]);
        maxi=max(maxi,x[i]);

    }
    cout<<maxi;

}

//method 2  => TC: O(N) || SC : O(1)

int Kadanesalgo2(int arr[],int n){
    int x;
    int maxi=x;
    x=arr[0];
    for(int i=1;i<n;i++){
        x=max(arr[i],x+arr[i]);
        maxi=max(maxi,x);

    }
    cout<<maxi;

}


int main(){
    int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n=sizeof(arr)/sizeof(int);
    //MaxSubSum2(arr,n);
    Kadanesalgo2(arr,n);
    return 0;
}