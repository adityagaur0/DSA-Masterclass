#include<iostream>

using namespace std;

int f(string s1, string s2) {

	// base case
	if (n == 0) { // s == "" or s.empty() or s.size() == 0
		return 0;
	}

	// if (n == 1) {
	// 	return s[n - 1] - '0';
	// }

	// recursive case

	string subString = s.substr(0, n - 1);
	int integerFromMyFriend = f(subString, n - 1);

	return integerFromMyFriend * 10 + (s[n - 1] - '0');

}

int main() {

	string str1 ="1";
    string str2="2";

	int x = f(str1,str2);

	cout << x << endl;

	return 0;
}