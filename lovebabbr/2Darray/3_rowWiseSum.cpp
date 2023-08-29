#include <iostream>
using namespace std;
void sumArr(int arr[][4],int m,int n){
    
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum +=arr[i][j];
            }
            cout<<sum<<endl;
        }
    
    }


int main(){
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    sumArr(arr,3,4);
    
}