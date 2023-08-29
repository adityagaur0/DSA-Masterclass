#include <iostream>
using namespace std;

//  BRUTE FORCE TC: O(N^2)
int TargetSumPairs(int arr[],int n,int T){
    int count=0;
    for(int i=0;i<=n-2;i++){
        for(int j=i+1;j<=n-1;j++){
            int pairsum=arr[i]+arr[j];
            if(pairsum==T){
                count++;
            }
            // cout<<"("<<arr[i]<<","<<arr[j]<<") ";
            
        }
        
        //cout<<endl;
    }
    cout<<count;

    return 0;

}

//Efficient approach 
//Two Pointer Approach
int TargetSumPairs2(int arr[],int n,int T){
    int count=0;
    int start=0;
    int end=n-1;
    while (start<end)
    {
        int pairSum=arr[start]+arr[end];
        if(pairSum==T){
            count++;
            start++;
            end--;
        }else{
            if(pairSum>T){
                end--;
            }else{
                start++;
            }
        }
    }
    cout<<count;

    return 0;

}



int main(){
    int arr[]={10,20,30,40,50,60};
    int n=sizeof(arr)/sizeof(int);
    int T=60;
    TargetSumPairs2(arr,n,T);
    return 0;

}