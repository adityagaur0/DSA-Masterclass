// // #include <iostream>
// // using namespace std;
// // // int reversearr(int arr[],int n){
// // //     int i=0;
// // //     int j=n-1;
// // //     while(i<=j){
// // //         swap(arr[i],arr[j]);
// // //         i++;
// // //         j--;
// // //     }
// // //     //return arr;
// // //     return 0;
// // // }

// // // int rotatenum(int arr[],int n,int k){
// // //     int temp=arr[n-1];
// // //     for(int i=n-1;i>0;i--){
// // //         arr[i]=arr[i-1];
// // //     }
// // //     arr[0]=temp;
// // //     for(int i=0;i<n;i++){
// // //         cout<<arr[i]<<" ";
// // //     }

// // //     return 0;

// // // }
// // int bubbleSort(int arr[],int n){
// //     //10,20,30,40,50
// //     //if the size of array is n then there are n-1 passes.
// //     for(int i=1;i<n-1;i++){
// //         for(int j=0;j<n-i;j++){
// //             if(arr[j]>arr[j+1]){
// //                 swap(arr[j],arr[j+1]);
// //             }
// //         }
// //     }
// //     //return *arr;
// //     //for each ith pass there is n-i comparisons.

// // }

// // int main(){
// //     int arr[]={50,40,30,20,10};
// //     int n=sizeof(arr)/sizeof(int);
// //     //reversearr(arr,n);
// //     // int k;
// //     // cout<<"Enter the times you want to rotate the array: ";
// //     // cin>>k;
// //     //rotatenum(arr,n,k);
// //     bubbleSort(arr,n);
// //     for(int i=0;i<n;i++){
// //         cout<<arr[i]<<" ";
// //     }
// //     return 0;
// // }



// #include<iostream>
// #include <string.h>
// using namespace std;

// bool palindrome(string str){
//     int i=0;
//     int j=str.size()-1;
//     while(i<j){
//         if(str[i]!=str[j]){
//             return false;
//         }
//     }
//     return true;

// }

// string substring(string str){
//     int count=0;
// 	int n=str.size();
// 	for(int i=0;i<n;i++){
// 		for(int j=i;j<n;j++){
// 			string sub= str.substr(i,j-i+1);
//             if(palindrome(sub)){
//     			cout<<sub<<endl;
//             }


// 		}
// 		cout<<endl;
// 	}
// 	return 0;
// }

// int main() {
// 	string str;
// 	cin>>str;
// 	substring(str);
// 	return 0;
// }

#include<iostream>
using namespace std;
int freq(string str){
    int arr[26];
    memset(arr,0,sizeof(arr));
    for(int i=0;str[i]!='\0';i++){
        char ch=str[i];
        int idx=ch-'a';
        arr[idx]++;

    }
    int maxi=0;
    for(int i=0;i<26;i++){
        maxi=max(maxi,arr[i]);


    }
    cout<<maxi;


	

}
int main() {
	string str;
	cin>>str;
	freq(str);
	return 0;
}