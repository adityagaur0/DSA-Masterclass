#include <iostream>
using namespace std;

int binarySearch(int* arr,int n,int t,int s,int e){
    
    if(s>e){
        return -1;
    }
    //recursive case
    int m=s+(e-s)/2;
    if(arr[m]==t){
        return m;
    }else if(arr[m]>t){
        return binarySearch(arr,n,t,s,m-1);

    }else{
        return binarySearch(arr,n,t,m+1,e);
    }
        

    
    
}
int main(){
    int arr[]={10,20,30,40,50};
    int t=40;
    int n=sizeof(arr)/sizeof(int);
    cout<<binarySearch(arr,n,t,0,n-1);
} 