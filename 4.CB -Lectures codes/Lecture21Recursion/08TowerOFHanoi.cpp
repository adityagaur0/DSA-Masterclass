#include <iostream>
using namespace std;
void f(int n,char source, char helper, char destination){
    if(n==0){
        return ;

    }
    //recursive call
    f(n-1,source,destination,helper);
    cout<<"Move disc "<<source<<" form  to "<<destination<<endl;
    f(n-1,helper,source,destination);
}
int main(){
    int n=3;
    f(n,'A','B','C');
}