#include <iostream>
using namespace std;
bool SortedSearch(int arr[][3],int row,int col,int t){
    int i=0;//row
    int j=col-1;//col
    while(i<=row-1&&j>=0){
        if(arr[i][j]==t){
            return true;
            break;
        }else{
            if(arr[i][j]<t){
                i++;

            }else{
                j--;
            }
        }
    }
    return false;



}

int main(){
    int arr[][3]={{10,20,30},{40,50,60},{70,80,90}};
    int t=50;
    int row=3;
    int col=3;
    cout<<SortedSearch(arr,row,col,t);
}