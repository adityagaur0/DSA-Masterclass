// 0 1 1 2 3 5
#include <iostream>
using namespace std;
int f(int n){
    if(n==0||n==1){
        return n;
    }
    return f(n-1)+f(n-2);
}
int main(){
    int x=4;
    cout<<f(x);
}