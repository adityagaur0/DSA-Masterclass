// Given a string str, design an algorithm to check it is a good string.  
// We define a good string as a string only contains vowels [a, e, i, o, u]. 
// Example  
// Input : "uoiea"  
// Output : True 

#include <iostream>
using namespace std;
bool GoodString(string str){
    // for(int i=0;i<str.size();i++){
    //     char ch=str[i];
    //     if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
    //         return true;
    //     }else{
    //         return false;
    //     }


    // }
    for(char ch:str){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            return true;
        }else{
            return false;
        }
    }
    

}
int main(){
    string str="uieo";
    cout<<GoodString(str);

}