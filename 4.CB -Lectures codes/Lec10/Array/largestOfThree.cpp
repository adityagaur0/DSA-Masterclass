#include <iostream>
using namespace std;
int maxiM(int arr[], int n){
    int maxi=-1;
    for(int i=0;i<5;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
            
        }

    }
    return maxi;
}

//scan the array find the largest.
//replace the largest with the negative infinity.
//replace the second largest with the negative infinity.

int maximum2(int arr[],int n){
    int f=INT_MIN;
    int s=INT_MIN;
    int t=INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]>f){
            t=s;
            s=f;
            f=arr[i];
        }else{
            if(arr[i]>s &&  arr[i]<f){
                t=s;
                s=arr[i];
            }else{
                if(arr[i]>t &&arr[i]<f&& arr[i]<s){
                    t=arr[i];
                }
            }
        }
        

        

    }
    return t;
}

int main(){
    int n=5;
    int arr[]={30,20,50,10,40};
    cout<<maximum2(arr,n);
}