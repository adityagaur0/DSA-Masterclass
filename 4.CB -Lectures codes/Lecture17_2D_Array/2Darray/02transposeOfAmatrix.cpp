#include <iostream>
using namespace std;

// accurate
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m=matrix.size(); //rows
        int n=matrix[0].size();//columns
        vector<vector<int>> t(n,vector<int>(m,0));
        for(int i=0;i<n;i++){ //iterate columns
            for(int j=0;j<m;j++){ //iterate rows
                t[i][j]=matrix[j][i]; 
            }
            cout<<endl;

           
        }
        return t;
    }
int main(){
    // arr[row][col]
    //arr[y][x]
    int arr[3][3]={{10,20,30},
                   {40,50,60},
                   {70,80,90}};
    //  if(arr[row]==arr[col]){
    //     cout<<arr[row][col];
    // }else{
    //     swap(arr[i],arr[j])
    // }
    for(int col=0;col<3;col++){
        for(int row=0;row<3;row++){
            if(arr[row]==arr[col]){
                cout<<arr[row][col]<<" ";
            }else{
                cout<<arr[col][row]<<" ";
            }
        }
    }
}