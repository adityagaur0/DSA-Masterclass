#include <iostream>
using namespace std;
int binarySearch(int arr[],int n,int target){
    int start=0;
    int end=n-1;
    
    while(start<=end){
        //int mid=(start+end)/2;
        int mid=start+(end-start)/2;
        if(target==arr[mid]){
            return mid;
        }else if(target>arr[mid]){
            start=mid+1;

        }else{
            end=mid-1;
        } 
    }
    return -1;
}
int main(){
    int arr[]={20,10,30,4,4};

    int target;
    cout<<"Enter your target: "<<endl;
    cin>>target;
    int n= sizeof(arr)/sizeof(n);
    sort(arr,arr+n);
    int binary= binarySearch(arr,n,target);
    if(binary==-1){
        cout<<"Array no found";

    }else{
        cout<<binary;
    }
}