// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
bool palindrome(string str){
    int start=0;
    int end= str.length()-1;
    for(int i=0;i<str.length();i++){
        if(str[i]!= str[end-i]){
            return false;
        }
        
    }
    return true;
}

int main() {
    // Write C++ code here
    string str="ABBA";
    cout << palindrome(str);

    return 0;
}