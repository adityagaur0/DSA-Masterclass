#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
//brute force  TC: O(N), SC O(N)
bool palindrome(char str[],int n){
    char str2[n];
    strcpy(str2,str);   //n steps
    cout<< str2<<endl;
    reverse(str2,str2+strlen(str2)); // n/2 steps
    cout<< str2<<endl;
    int ans=strcmp(str,str2); // n steps
    if(ans==0){
        return true;
    }else{
        return false;
        
    }
}

//efficient approach => TC :O(N) , SC:O(1)

bool palindrome2(char* str,int n){
    int i=0;
    int j=n-1;
    while(i<=j){
        if(str[i]==str[j]){
            i++;
            j--;
        }else{
            return false;
        }
        return true;
    }

}

int main(){
    char str[]="jalaj";
    int n=strlen(str);
    cout<<palindrome2(str,n);

}