#include <iostream>
using namespace std;
string f(string str,int n){
    //base case
    if(n==0){
        return "";
    }

    //recursive case
    string substring= str.substr(1,n-1);
    string stringfromMyfriend=f(substring,n-1);
    char ch=str[0];
    if(ch=='x'){
        return stringfromMyfriend+ch;
    }else{
        return ch+stringfromMyfriend;
    }

}
int main(){
    string str="xbxcx";
    int n=str.size();
    cout<<f(str,n);
}