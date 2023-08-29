#include <iostream>
using namespace std;
int sumD(int n){
    int a,b,c;
    if(n>9&&n<100){
        a=n/10;
        b=n%10;
        return a+b;

    }else{
        a=n/100;
        b=n&100;
        c=n%10;
        return a+b+c;
    }

}
int main(){
    int num=123;
    cout<<sumD(num);

}