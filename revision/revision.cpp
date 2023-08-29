// #include <iostream>
// using namespace std;
// // int reversearr(int arr[],int n){
// //     int i=0;
// //     int j=n-1;
// //     while(i<=j){
// //         swap(arr[i],arr[j]);
// //         i++;
// //         j--;
// //     }
// //     //return arr;
// //     return 0;
// // }

// // int rotatenum(int arr[],int n,int k){
// //     int temp=arr[n-1];
// //     for(int i=n-1;i>0;i--){
// //         arr[i]=arr[i-1];
// //     }
// //     arr[0]=temp;
// //     for(int i=0;i<n;i++){
// //         cout<<arr[i]<<" ";
// //     }

// //     return 0;

// // }
// int bubbleSort(int arr[],int n){
//     //10,20,30,40,50
//     //if the size of array is n then there are n-1 passes.
//     for(int i=1;i<n-1;i++){
//         for(int j=0;j<n-i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
//     //return *arr;
//     //for each ith pass there is n-i comparisons.

// }

// int main(){
//     int arr[]={50,40,30,20,10};
//     int n=sizeof(arr)/sizeof(int);
//     //reversearr(arr,n);
//     // int k;
//     // cout<<"Enter the times you want to rotate the array: ";
//     // cin>>k;
//     //rotatenum(arr,n,k);
//     bubbleSort(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


