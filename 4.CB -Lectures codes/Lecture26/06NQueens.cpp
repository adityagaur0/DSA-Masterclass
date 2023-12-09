#include <iostream>
using namespace std;
void nQueens(int n,int* pos,int r){
    //base case
    //base case when all the queens are placed.

    if(r==n){
        // for(int i=0;i<=n-1;i++){
        //     cout<<pos[i]<<" ";
        // }

        // cout<<endl;
        int total;
        for(int i=0;i<=n-1;i++){
            for(int j=0;j<=n-1;j++){
                if(pos[i]==j){
                    cout<<'Q';
                    total+=1;

                }
                else{
                    cout<<'-';
                }
             
            }
            
            cout<<endl;
        }
        cout<<endl;
        cout<<total;
        return;
    }


    /*recursive case
    -fn to find where to place Qr in r th row
    -but not all options in row r is valid so we need to choose jth option which is valid
    - we need to check the valid option is 0<=j<=n-1 in row r
    - j is valid only is 
    - previous queen placed not in same col or diagnoal of j
    */
   for(int j=0;j<=n-1;j++){
    //j is valid if Qr col j != Q(0to r-1) col j
    // qr diagnoal (r-1,j-1) and r

    bool canplace=true;

    // iterate over all the previous queens
    for(int i=0;i<=r-1;i++){
        if(pos[i]==j|| pos[i]==j-(r-i) || pos[i]==j+(r-i)){
            canplace = false;
            break;
        }

    }

    if(canplace){
        pos[r]=j;   /// back track takes plce here only we can do it my vector my push j into it.
        nQueens(n,pos,r+1);  // then pop back after this statement
    }

   }

}
int main(){
    int n=4;
    int pos[10];
    nQueens(n,pos,0);
}