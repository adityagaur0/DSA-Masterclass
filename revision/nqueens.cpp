#include <iostream>
using namespace std;

void nQueens(int n,int* pos,int r){
    // base case
    if(r==n){
        for(int i=0;i<n;i++){
            cout<<pos[i]<<" ";
        }
        cout<<endl;
        return;
    }

    // recursive case
    // iterate over the rth row and find the best place in the row to place the queen.

    for(int j=0;j<=n-1;j++){
        bool canplace=true;

        //iterate over all the previous queens and find if j is not at same col as them or in same diagonal .
        for(int i=0;i<=r-1;i++){
            if(pos[i]==j|| pos[i]== j-(r-i) || pos[i]==j+(r-i)){
                canplace=false;
                break;
            }
        }

        if(canplace){
            pos[r]=j; //placed the queen at rth row at pos j
            nQueens(n,pos,r+1);// move to next row to place another queen.
        }
    }
}
int main(){
    int n=4;
    int pos[10];
    nQueens(n,pos,0);
}