#include <iostream>
using namespace std;
char toLowercase(char ch){
    if(ch>='a'&& ch<='z'){
        return ch;
    }
    else{
        char temp=ch - 'A'+'a';
        //when we subtract A from character. we get a differece example 1 and then we add 'a' to it it will retrun b;
        return temp;
    }
}
int main(){
    cout<<toLowercase('A');

}