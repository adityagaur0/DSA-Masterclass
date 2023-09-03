#include <iostream>
using namespace std;
int main(){
    int arr[3][3]={{10,20,30},{40,50,60},{70,80,90}};
    //00 ,10,20,01,11,21,02,12,22;
    //row 0,1,2,0,1,2,0,1,2
    //column 0,0,0,1,1,1,2,2,2;
    for(int col=0;col<3;col++){
        for(int row=0;row<3;row++){
            cout<<arr[row][col]<<" ";
        }
    }
}