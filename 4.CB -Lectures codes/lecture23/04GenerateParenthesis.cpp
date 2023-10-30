#include <iostream>
using namespace std;
void f(int n,char* out,int j,int opencount,int closecount){
    //base case
    if(opencount==n and closecount==n){
        out[j]='\0';
        cout<<out<<endl;
        return;
    }

    //recursive case
    //we are taking sequence of 2n decisions , a decision to determine our next step
    //if the ith parenthesis is '('
    if(opencount<n){
        out[j]='(';
        f(n,out,j+1,opencount+1,closecount);
    }

    if(closecount<n){
        out[j]=')';
        f(n,out,j+1,opencount,closecount+1);
        
    }

}
int main(){
    int n=2;
    char out[10];
    f(n,out,0,0,0);
    return 0;
}