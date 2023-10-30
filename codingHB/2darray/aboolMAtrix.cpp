#include<iostream>
using namespace std;
int bolMatrix(int arr[][100],int m,int n){
    int idx_i=0;
    int idx_j=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==1){
                idx_i=i;
                idx_j=j;
            }
            if(i==idx_i||j==idx_j){
                arr[i][j]=1;
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j];
        }
        cout<<endl;}

}
int main () {
	int m=2;
	int n=2;

	int arr[][100]={{1,0},{0,0}};
	bolMatrix(arr,m,n);
	return 0;
}