#include <iostream>
using namespace std;
string swapS(string s){
    int st=0;
    int e=s.length()-1;
    while(st<e){
        swap(s[st++],s[e--]);
    }
    return s;

}
string reverseWord(string s,int n){
    string temp;
    for(int i=0;i<n;i++){
        if(s[i]==' '){
            temp.push_back(' ');
        }
        else{
            temp.push_back(swapS(s));
        }
    }
    return temp;
}
int main(){
    string str=" My Name Is Love";
    int n=str.length;
    cout<<reverseWord(str,n);
}