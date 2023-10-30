#include <iostream>
using namespace std;
void f(char* inp ,int i,char* out , int j){
    //base case
    if(inp[i]=='\0'){
        out[j]='\0';
        cout<<out<<endl;
        return;
    }
    //recursive case
    // decide weather to keep inp[i] to the output sequence or not
    //if yes then store the value in output seq and ask friend to do the same for other i+1 character
    
    //include the character
    out[j]=inp[i];
        //j+1 cuz to we storing the char of inp to out 
        // and move +1 to add another character
    f(inp,i+1,out,j+1);

    //exclude the character
    // we did not add character in j as we excluded it.
    f(inp,i+1,out,j);
    
 
}
int main(){
    char inp[]="abc";
    char out[10];
    f(inp,0,out,0);
}

