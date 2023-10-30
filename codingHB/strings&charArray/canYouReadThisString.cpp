#include<iostream>
using namespace std;
void fn(string str){
    for(int i=0;str[i]!='\0';i++){
        char ch=str[i];
        if(ch>='A'&&ch<='Z'){
            cout<<'\n';
            cout<<ch;
        }else{
            cout<<ch;
        }
    }


}

int main() {
	string str="IAmACompetitiveProgrammer";
	fn(str);
	return 0;
}