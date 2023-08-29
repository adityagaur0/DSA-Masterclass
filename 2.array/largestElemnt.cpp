#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int largestElement(int arr[],int Size){
   int max=arr[0];
    for(int i=1;i<Size;i++){
        if(max<arr[i]){
            max=arr[i];

        }
    }
    return max;
    
}


int main(){
    int arr[]={2,3,4,5,6666};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<largestElement(arr,n);

}
