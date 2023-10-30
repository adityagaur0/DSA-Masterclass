#include <iostream>
using namespace std;
int f(int* arr,int t,int n,int i){
    //base case
    if(i==n){
        return -1;

    }

    //recursive case
    if(arr[i]==t){
        return i;
    }
    return f(arr,t,n,i+1);


}
int main(){
    int arr[]={10,20,30,20,30};
    int t=20;
    int n=sizeof(arr)/sizeof(int);
    cout<<f(arr,t,n,0);
}