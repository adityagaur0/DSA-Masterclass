// #include <iostream>
// using namespace std;
// void f(char* inp,int i){

//     //base case
//     if(inp[i]=='\0'){
//         return;
//     }

//     //recursive case

//     //replace all the pi's with 3.14 in inp [i...]
//     if(inp[i]=='p' and inp[i+1]=='i'){
//         //replace pi with 3.14 at (i,i+1) index with 3.14
//         ////shift alll the character starting at i+2 to 2 step right
        
//         ///// arr i,i+1,i+2......... '\0'
//         //we want to know the exact positon of null so we run the loop

//         int j=i+2;
//         while(inp[j]!='\0'){
//             j++;
//         }
//         while (j>=i+2){
//             inp[j+2]=inp[j];
//             j--;
//         }

        
//         //// 
//         inp[i]='3';
//         inp[i+1]='.';
//         inp[i+2]='1';
//         inp[i+3]='4';

//         //replace all pi's with 3.14 in inp[i+4]
//         f(inp,i+4);

//     }else{
//         //ask friend to replace all the pi with 3.14 at i+1;
//         f(inp,i+1);
//     }

// }
// int main(){
//     char inp[20]="pippi";
//     f(inp,0);// replace pi in input to 3.14
//     cout<<inp<<endl;
// }

#include <iostream>
using namespace std;
void f(char* inp,int i){
    //base case
    if(inp[i]=='\0'){
        return;
    }

    //recursive case
    if(inp[i]=='p' && inp[i+1]=='i'){
        //shit [i+2] to 2 steps
        int j=i+2;
        while(inp[j]!='\0'){
            j++;
        } 

        // while(j>=i+2){
        //     inp[j+2]=inp[j];
        //     j--;
        // }
        for(int k=j;k>=i+2;k--){
            inp[k+2]=inp[k];
        }

        // insert 3.14
        inp[i]='3';
        inp[i+1]='.';
        inp[i+2]='1';
        inp[i+3]='4';
        //ask friend to do it for [i+4.......]
        f(inp,i+4);
    }else{
        // ask friend to do it for [i+1.....]
        f(inp,i+1);
    }

}
int main(){
    char inp[20]="pip";
    f(inp,0);
    cout<<inp<<endl;
    return 0;
}
























