#include <iostream>
using namespace std;
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