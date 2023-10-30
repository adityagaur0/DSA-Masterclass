#include<iostream>
using namespace std;
int park(char arr[][10],int m,int n,int k,int s){
	int count=s;
    int i=0;
    int j=0;
    for(int i=0;i<n;i++){
        while(j<m){
            cout<<arr[i][j];
        j++;
    }
        cout<<endl;

    }

	// for(int i=0;i<n;i++){
	// 	for(int j=0;j<m;j++){
    //         cout<<arr[i][j];
	// 		if(arr[i][j]=='.'){
	// 			count-=-2;
	// 		}

	// 	}
	// 	cout<<endl;
	// }
	return 0;
	
}
int main() {
	//int n,m,k,s;
	// cin>>n>>m>>k>>s;
	// char arr[100][100];
	// for(int i=0;i<n;i++){
	// 	for(int j=0;j<m;j++){
	// 		cin>>arr[i][j];
	// 	}
	// }
    char arr[10][10]={{'.','.','*','.'},
                      {'.','#', '.', '.'},
                      {'*','*','.','.'},
                      {'.','#','*','*'}};
	park(arr,4,4,5,20);
	return 0;
}