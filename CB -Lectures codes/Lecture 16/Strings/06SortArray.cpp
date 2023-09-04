// Longest Good Sub-String 
// Given a string str, design an algorithm to find the length of its longest good sub-string.  
// We define a good sub-string of str as a sub-string that only contains vowels [a, e, i, o, u]. 
// Example  
// Input : "cbaeicdeiou"  
// Output : 4 

#include <iostream>
#include <algorithm>
using namespace std;
bool myStringGreater(string a,string b){
    if(a>b){
        return true;
    }else{
        return false;
    }

}
int main(){
    string arr[] = {"abc", "ghi", "jkl", "def"};
    int n=4;
    string brr[n];
    for(int i=0;i<n;i++){
        brr[i]=arr[i];
    }

    sort(arr,arr+4);
    cout<<"arr: ";
    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;


    // sort(brr,brr+n,greater<string>());
    sort(brr,brr+n,myStringGreater);
    cout<<"brr: ";
    for(int i=0;i<4;i++){
        cout<<brr[i]<<" ";

    }


}