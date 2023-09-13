#include <iostream>
// #include<cstring>
#include<algorithm>
using namespace std;
int main(){
    char str[50];
    // cin.getline(str,50);
    cin.getline(str,50,'$');  //'\n' default delimiter
    
	cout << "Original string : " << str << endl;
}