#include <iostream>
using namespace std;
void printdiagonal(int arr[][10],int m,int n,int i,int j){
    int lengthOfDiagonal=min(m-i,n-j);
    for(int k=0;k<lengthOfDiagonal;k++){
        cout<<arr[i+k][j+k]<<" ";
    }
}
void diagionaltraverse(int arr[][10],int m,int n){

    //start diagonal from rows 0<=rows<=n-1 
    //1.(i,0)
    for(int i=m-i;i>=0;i--){
        printdiagonal(arr,m,n,i,0);

    }

    //2.start diagonal from col 0<=col<=n-1 (0,j)
    for(int j=1;j<=n-1;j++){  //start from one not from zero cuzz to avoid repeatition
        printdiagonal(arr,m,n,0,j);
        
    }

}
int main(){
    int arr[10][10]={{11,12,13,14},
                    {15,16,17,18},
                    {19,20,21,22}};

    diagionaltraverse(arr,3,4);
    return 0;

}