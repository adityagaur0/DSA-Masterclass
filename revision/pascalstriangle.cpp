#include <iostream>
using namespace std;
int pascal(int n){
    int arr[n][n];
    //arr[y][x]
    for(int row=0;row<n;row++){
        arr[row][0]=1;
        arr[row][row]=1;
        for(int col=1;col<row;col++){
            arr[row][col]=arr[row-1][col]+arr[row-1][col-1];
        }

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }

}
int main(){
    int n=5;
    pascal(n);
}