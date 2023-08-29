#include <iostream>
#include <cmath>

using namespace std;

int Subseq(int arr[],int n){
    //find total bits 
    int Tbits=pow(2,n);
    for(int i=0;i<Tbits;i++){
        cout<<i<<" : ";
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }

}

int main(){
    int arr[]={10,20,30};
    int n=sizeof(arr)/sizeof(int);
    Subseq(arr,n);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    return 0;
}