#include <iostream>
using namespace std;

void WaveArr(int arr[][2],int m,int n){
    
    for(int i=0;i<n;i++){
       // int wave=0;
        for(int j=0;j<m;j++){
            cout<<arr[j][i]<<endl;
            }
            //arr2[i]=sum;
            // if(sum>maxi){
            //     maxi=sum;
            //     rowIndex=i;
            // }
            
        }
        
        
        
    
    }


int main(){
    int arr[2][2]={{1,2},{3,4}};
    WaveArr(arr,2,2);
    
}