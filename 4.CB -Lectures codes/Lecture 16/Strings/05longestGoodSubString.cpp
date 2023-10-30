// Longest Good Sub-String 
// Given a string str, design an algorithm to find the length of its longest good sub-string.  
// We define a good sub-string of str as a sub-string that only contains vowels [a, e, i, o, u]. 
// Example  
// Input : "cbaeicdeiou"  
// Output : 4 

#include <iostream>
using namespace std;

int longestGoodSubstring(string str){
    int count=0;
    int maxlen=0;
    // for(int i=0;i<str.size();i++){
    //     char ch=str[i];
    //     if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
    //         count++;
    //         maxlen=max(count,maxlen);
    //     }else{
    //         count=0;
    //     }
    // }
    for(char ch:str){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            count++;
            maxlen=max(count,maxlen);
        }else{
            count=0;
        }
    }
    cout<<maxlen;
    


}
int main(){
    string str = "cbaeicdeiou";
    longestGoodSubstring(str);


}