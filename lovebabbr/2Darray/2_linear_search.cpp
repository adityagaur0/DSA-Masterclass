#include <iostream>
using namespace std;

int searchArr(int arr[][4],int target,int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    int target;
    cin>>target;

    if(searchArr(arr,target,3,4)){
        cout<<"present";
    }else{
        cout<<"not present";
    }
}