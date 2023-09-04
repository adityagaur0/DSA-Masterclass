#include <iostream>
using namespace std;
int main(){
    string str5 = "mississippi";

	cout << str5.find("si") << endl;
	cout << str5.rfind("si") << endl;
	cout << str5.find("hello") << endl;
	cout << string::npos << endl;
} 