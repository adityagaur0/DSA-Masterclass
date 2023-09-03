#include <iostream>
using namespace std;
int * fn(){
    int* xptr =new int;
    *xptr=10;
    return xptr;
}
int main(){
    int* xptr=fn();
    cout<<xptr;

}