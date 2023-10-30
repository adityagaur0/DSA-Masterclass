#include <iostream>
using namespace std;
int f(int* arr,int n,int i){
    //base case
    if(i==n-1){
        return true;
    }

    //recursive case
    //1.check if arr[i]>arr[i-1]
    //if true
    //tell friend to solve aage ka
    return arr[i]<arr[i+1] and f(arr,n,i+1);
}
int main(){
    int arr[]={42,
28,43, 26, 65 ,60 ,54 ,51, 35 ,42 ,48, 33 ,40 ,58, 38, 64, 47 ,44 ,49, 46 ,25 ,57, 39 ,55, 45 ,29, 32 ,61, 53, 31 ,36,56, 63, 30 ,52, 27 ,34, 50 ,41, 37 ,66 ,62, 59};
    int n=sizeof(arr)/sizeof(int);
    cout<<f(arr,n,0);

}