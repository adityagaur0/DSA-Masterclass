#include <iostream>
using namespace std;
int f(string str,int n){
    //base case
    if(n==0){
        return 0;
    }

    //recusrive case
    string Substring = str.substr(0,n-1);
    int intgerfromMyfriend= f(Substring,n-1);
    return (intgerfromMyfriend)*10+(str[n-1]-'0');
}
int main(){
    string str="1234";
    int n=str.size();
   cout<<f(str,n);



}