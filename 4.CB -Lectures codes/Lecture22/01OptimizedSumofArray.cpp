#include <iostream>
#include <algorithm>
using namespace std;
int f(int* arr,int n,int s,int e){
    //base case
    if(s==e){
        return arr[s];
    }
    //recursive case
    int m=s+(e-s)/2;
    return f(arr,n,s,m)+f(arr,n,m+1,e);
}
int main(){
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(int);
    int s=0;
    int e=n-1;
    cout<<f(arr,n,s,e);
    
}