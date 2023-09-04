#include <iostream>
#include <algorithm>
using namespace std;
string SubString(string str){
    for(int i=0;i<str.size();i++){
        for(int j=i;j<str.size();j++){
            //way1
            // for(int k=i;k<=j;k++){
            //     cout<<str[k];
            // }
            // cout<<endl;
            //way2
            string subString=str.substr(i,j-i+1);
            cout<<subString<<endl;
        }
        cout<<endl;
    }
}
int main(){
    string str="abaaba";
    SubString(str);

}