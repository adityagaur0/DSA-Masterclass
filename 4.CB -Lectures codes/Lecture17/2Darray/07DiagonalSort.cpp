#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void printdiagonal(int arr[][10],int m,int n,int i,int j){
    int diagonalLength=min(m-i,n-j);
    vector<int> sorteddiagonal;
    for(int k=0;k<diagonalLength;k++){
        sorteddiagonal.push_back(arr[i+k][j+k]);
    }
    sort(sorteddiagonal.begin(),sorteddiagonal.end());
    for(int k=0;k<diagonalLength;k++){
        cout<<sorteddiagonal[k]<<" ";
    }



}

void diagonaltraverse(int arr[][10],int m,int n){
        //start diagonal from rows 0<=rows<=n-1 
        for(int i=n;i>=0;i--){
            printdiagonal(arr,m,n,i,0);
        }
        //2.start diagonal from col 0<=col<=n-1 
        for(int j=1;j<=n-1;j++){
            printdiagonal(arr,m,n,0,j);
        }

}
int main(){
    int arr[10][10]={{10,70,20},
                     {30,40,80},
                     {60,90,50}};

    diagonaltraverse(arr,3,3);
    return 0;

}