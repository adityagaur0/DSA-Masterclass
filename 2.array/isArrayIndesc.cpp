
#include <iostream>
using namespace std;
bool check(int arr[],int N){

    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(arr[i]>arr[j]){
                return false;
            }
            
        }
        
    }
    return true;
}

bool efficient(int arr[],int N){
    for(int i=1;i<N;i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;
    
}
int main(){
    int arr[]={8,12,0};
    int size=3;
    cout<<efficient(arr,size);
}