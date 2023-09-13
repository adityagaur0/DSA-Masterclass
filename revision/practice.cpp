#include<iostream>
#include <cstring>
using namespace std;
char fn(string str){
    for(char ch:str){
        cout<<ch-'a';
        cout<<endl;
    }
	// int n=str.size();
	// for(int i=0;i<n;i++){
	// 	char ch=str[i];
	// 	if(i%2==0){
	// 		cout<<ch+1;
	// 	}else{
	// 		cout<<ch-1;
	// 	}
	// }
	// return 0;


}
int main() {
	string str="abcd";
	// cin>>str;
	fn(str);

	return 0;
}