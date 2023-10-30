#include <iostream>
// #include<cstring>
#include<algorithm>
using namespace std;
int main(){
    char str[]="hello";
	cout << "Original string : " << str << endl;
    //start index ,end index
	reverse(str, str + strlen(str));

	cout << "Reversed  string after 2nd reverse : " << str << endl;
}