#include <iostream>
#include <string>
using namespace std;
string keyword[]={"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};

void generatekeyword(char* inp,int i,char* out ,int j){
    // base case
    if(inp[i]=='\0'){
        out[j]='\0';
        cout<<out<<endl;
        return;
    }


    ///recursive case
    int di= inp[i]-'0';
    if(di==0||di==1){
        //therefore we need to skip for i and let friend do it for i+1;
        generatekeyword(inp,i+1,out,j); 
        return;

    }
    int k= keyword[di].length();
    string option=keyword[di];

    // therefore in for loop backtracking is ocurring
    for(int l=0;l<k;l++){
        char c_l = option[l];
        out[j]=c_l;
        //tell friend to do it
        generatekeyword(inp,i+1,out,j+1);
    }

}
int main(){
    char inp[]="123";
    char out[10];
    generatekeyword(inp,0,out,0);
    return 0;
}