#include<iostream>
#include<climits>
using namespace std;
void luckyMatrix(int matrix[][50],int m,int n){
        int total=m*n;
        int count=0;
        int startrow=0;
        int endrow=m-1;
        int endcol=n-1;
        int startcol=0;
        while(count<total){
            int mini=INT_MAX;
            int maxi=INT_MIN;
            for(int i=startcol;i<=endcol;i++){
                mini=min(mini,matrix[startrow][i]);
            }
            startrow++;
            for(int i=startrow;i<=endrow;i++){
                maxi=max(maxi,matrix[i][startcol]);
            }
            startcol++;
            if(maxi==mini){
                cout<<mini;
            }
            count++;
            if(count>=total){
                break;
            }
        }
        

}
int main () {
	int m;
	int n;
    cin>>m>>n;

	int arr[50][50];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

	luckyMatrix(arr,m,n);
	return 0;
}