#include <iostream>
using namespace std;
void f(int n,char* out ,int i,int j){
    //base case
    if(i==n){
        out[j]='\0';
        cout<<out<<endl;
        return;
    }

    // recursive case

	// take a decision for the ith coin

	// 1. ith coin shows "head"
    //therefore it show head only when the previous coin is not head and it is the first coin
    if(j==0 or out[j-1]!='H'){
        out[j]='H';
        f(n,out,i+1,j+1);

    }

    //2.ith coun shows " tails"
    out[j]='T';
    f(n,out,i+1,j+1);
}
int main(){
    int N=3;
    char out[10];
    f(N,out,0,0);
    return 0;
}