#include <iostream>
using namespace std;
//BRUTE FORCE
int mostWater(int arr[],int n){
    int maxArr=0;
    for(int i=0;i<=n-2;i++){
        for(int j=i+1;j<=n-1;j++){
            int w_ij=j-i;
            int h_ij=min(arr[i],arr[j]);
            int max1=w_ij*h_ij;
            maxArr=max(maxArr,max1);
            

        }
    }
    cout<<maxArr;
    return 0;

}

//Optimization
//TWO POINTER APPROACH
int mostWater2(int arr[],int n){
    int maxArea=0;
    int i=0;
    int j=n-1;
    while(i<j){
        int wid_ij=j-i;
        int h_ij=min(arr[i],arr[j]);
        int area=wid_ij*h_ij;
        maxArea=max(maxArea,area);
        if(arr[i]<arr[j]){
            i++;
        }else{
            j--;
        }

    }
    cout<<maxArea;
    return 0;
}


int main(){
    int arr[]={1,8,6,2,5,4,8,3,7};
    int n=sizeof(arr)/sizeof(int);
    mostWater2(arr,n);
    return 0;

}