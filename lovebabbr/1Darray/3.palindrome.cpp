#include <iostream>
using namespace std;
bool palindrome(string &str,int len){
    int start=0;
    int end=len-1;
    while(start<end){
        if(str[start]!=str[end]){
            return false;
        }else{
            start++;
            end--;
        }
    }
    return true;


}
int main(){
    string str="ABCCBA";
    int len=str.length();
    cout<<palindrome(str,len);

}