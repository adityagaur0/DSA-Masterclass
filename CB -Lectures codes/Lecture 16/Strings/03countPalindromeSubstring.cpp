#include <iostream>
#include <algorithm>
using namespace std;
bool palindrome(string str){
    int i=0;
    int j=str.size()-1;
    while(i<j){
        if(str[i]!=str[j]){
            return 0;
        }
        i++;
        j--;

    }
    return 1;
}
string SubString(string str){
    int count=0;
    for(int i=0;i<str.size();i++){
        for(int j=i;j<str.size();j++){
            //way1
            // for(int k=i;k<=j;k++){
            //     cout<<str[k];
            // }
            // cout<<endl;
            //way2
            string subString=str.substr(i,j-i+1);
            if(palindrome(subString)){
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
int main(){
    string str="abaaba";
    SubString(str);

}