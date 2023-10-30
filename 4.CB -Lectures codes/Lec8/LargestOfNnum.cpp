#include <iostream>
using namespace std;
int LarNum(int arr[],int n){
    int maxi=0;
    for(int i=0;i<n;i++){
        if(maxi<arr[i]){
            maxi=arr[i];
        }
    }
    return maxi;

    
 
    
}
int main(){
    int n=5;
    int arr[n+1];
    for(int i=0;i<=n;i++){
        cin>>arr[i];
        
    }
    cout<<"num is: "<<LarNum(arr,n);


}