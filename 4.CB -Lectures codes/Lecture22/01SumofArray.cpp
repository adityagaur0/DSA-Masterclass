#include <iostream>
using namespace std;
int f(int* arr,int n,int i){
    //base case
    if(i==n){
        return 0;
    }

    //recursive case
    int A=f(arr,n,i+1);
    return arr[i]+A;
}
int main(){
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(int);
    cout<<f(arr,n,0);
}