#include <iostream>
using namespace std;
//a.  -1,-2,-3,1,2,3
//if maxsum ==array sum find max Array Sum;
// maxSum= 1,2,3
//case1:: 
//b.  1,2,-3,-4,5,6
//maxSum= Arrsum-minSum
//maxSum= 1,2,5,6 
int CircularArraySUm(int arr[],int n){
    int X=arr[0];
    int maxi=X;
    int Y= arr[0];
    int mini=Y;
    int ArrSum=arr[0];
    for(int i=1;i<n;i++){
        //find array SUm
        ArrSum+=arr[i];

        //maxArrSum
        X=max(arr[i],X+arr[i]);
        maxi=max(maxi,X);

        //minArrSum
        Y=min(arr[i],Y+arr[i]);
        mini=min(mini,Y);


    }
    //allthe element having negative value -1,-2,-3,-4,-5;
    return ArrSum==mini? maxi : max(maxi,ArrSum-mini);



}
int main(){
    int arr[]={-1,-2,-3,1,2,3};
    int n=sizeof(arr)/sizeof(n);
    cout<< CircularArraySUm(arr,n);
    return 0;
}