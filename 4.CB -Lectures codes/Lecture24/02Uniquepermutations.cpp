#include <iostream>
#include <set>
using namespace std;

set<string> s;
void f(char* inp,int i){
    //base case
    if(inp[i]=='\0'){
        // cout<<inp<<endl;
        s.insert(string(inp));
        return;
    }

    //recursive case
    int n=strlen(inp);
    for(int j=i;j<=n-1;j++){
        swap(inp[i],inp[j]);
        f(inp,i+1);
        //swap(inp[i],inp[j]); //backtracking the step
    }
}
int main(){
    char inp[]="aabc";
    f(inp,0);
    for(string permutations : s){
        cout<<permutations<<" ";
    }
}