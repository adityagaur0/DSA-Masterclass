#include <iostream>
using namespace std;
void f(int n){
    //base case
    if(n==0){
        return;
    }

    //recursive call
    f(n-1);
    cout<<n;
}
int main(){
    int n=4;
    f(4);
}