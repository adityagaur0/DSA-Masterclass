#include<iostream>
#include <algorithm>
using namespace std;
int pairSum(int arr[],int n,int T){
	int i=0;
	int j=n-1;
    int p1=0;
    int p2=0;
    sort(arr,arr+n);
	while(i<j){
		int sumpair=arr[i]+arr[j];
		if(sumpair==T){
            p1=arr[i];
            p2=arr[j];
            i++;
            j--;
		}
        else{
            if(sumpair>T){
                j--;

            }else{
                i++;
            }
        }
    }
    cout<< p1<<p2;
    return 0;
}
int main() {
	// int t;
	// for(int i=0;i<t;i++){
	// 	int n,T;
	// 	cin>>n;
	// 	int arr[n];
	// 	for(int i=0;i<n;i++){
	// 		cin>>arr[i];


	// 	}
	// 	cin>>T;
	// 	pairSum(arr,n,T);
	// }

    int arr[]={10,2,6,8,4};
    int n=sizeof(arr)/sizeof(int);
    int T=10;
    pairSum(arr,n,T);

}
