#include <iostream>
using namespace std;

int circularArr(int arr[],int n){
    int arrSum=arr[0];
    int x=arr[0];
    int y=arr[0];
    int maxi=x;
    int mini=y;
    for(int i=1;i<n;i++){
        arrSum+=arr[i];
        x=max(x+arr[i],arr[i]);
        maxi=max(x,maxi);
        y=min(y+arr[i],arr[i]);
        mini=min(mini,y);
        
    }

    return arrSum==mini? maxi: max(maxi,arrSum-mini);
    //return 0;
}

int main(){
    int arr[]={-3,-2,-3};
    int n=sizeof(arr)/sizeof(int);
    cout<< circularArr(arr,n);
    return 0;

}