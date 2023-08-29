// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int largest(int arr[],int n){
    
    int maxi=-1;
    for(int i=0;i<n;i++){
        if(maxi<arr[i]){
            maxi=arr[i];
        }
    }
    return maxi;
    
}

int fibbo(int n){
    if(n==0||n==1){
        return n;
    }
    return fibbo(n-1)+fibbo(n-2);

    
}


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<largest(arr,n);
    //cout<<fibbo(n);
    


    return 0;
}