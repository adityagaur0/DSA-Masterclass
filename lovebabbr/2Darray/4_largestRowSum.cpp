#include <iostream>
using namespace std;
// int largestElement(int arr[]){
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int max=-1;
//     int idx=0;
//     for(int i=0;i<n;i++){
//         if(max<arr[i]){
//             max=arr[i];
//             idx=i;
//         }
//     }cout<<"element "<<max<<" row "<<idx<<endl;
// }
void sumArr(int arr[][4],int m,int n){
    //int arr2[3]={0};
    int maxi=-1;
    int rowIndex=-1;
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum +=arr[i][j];
            }
            //arr2[i]=sum;
            if(sum>maxi){
                maxi=sum;
                rowIndex=i;
            }
            
        }
        cout<< "the maximum sum of row is "<<maxi<<endl;
        cout<<"the row is "<<rowIndex+1;
        
        
    
    }


int main(){
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    sumArr(arr,3,4);
    
}