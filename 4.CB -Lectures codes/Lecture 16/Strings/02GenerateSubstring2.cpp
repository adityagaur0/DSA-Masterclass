#include <iostream>
#include <algorithm>
using namespace std;
string SubString(string str){
    int n=str.size();
    for(int len=1;len<=n;len++){
        for(int i=0;i<=n-len;i++){
            string Substring=str.substr(i,len);
            cout<<Substring<<endl;


        }
        cout<<endl;
    }
    return 0;
}
int main(){
    string str="abcde";
    SubString(str);
    return 0;

}