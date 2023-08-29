#include <iostream>
using namespace std;

int DeleteE(int arr[],int element,int size){
    int idx;
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            idx=i;
        }
    }
    for(int i=idx;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    
    size=size-1;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int arr[]={5,10,7,20};
    int size=4;
    int element=7;
    int pos=2;
    DeleteE(arr,element,size);
    
    
}
