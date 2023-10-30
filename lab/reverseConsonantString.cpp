#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
void reverseStr(string str){
    int i=0;
    int j=str.size()-1;
    for(int i=0;str[i]!='\0';i++){
        char ch=str[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='I'||ch=='E'||ch=='O'||ch=='U'){
            int idx=ch-'a';
        }
    }



 
}
int main(){
    string str="world";
    reverseStr(str);

}