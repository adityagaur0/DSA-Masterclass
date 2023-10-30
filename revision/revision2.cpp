// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int N;
    cout<<"enter the value of N "<<endl;
    cin>>N;
    
    int arr[N];
    cout<< "Enter the value of arr elements "<<endl;
    for(int i=0;i<N;i++){  //n=5
        cin>>arr[i];
    }
    
    int T;
    cout<< "Enter the value of target(T) "<<endl;
    cin>>T;
    
    //arr[0.......N] ==T;?
    // equal hai toh print krdenge 
    // main cheez hum break use ni krenge
    //print krte rahange jab tak hummra loop katham ni hota

    int flag=0;
    for(int i=0;i<N;i++){
        if(arr[i]==T){
            cout<<i;
            flag=1;
  
        }
    }
    if(flag==0){
        cout<< -1;
    }
    
}
