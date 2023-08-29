#include <iostream>
using namespace std;
int fibbo(int n){
    if(n==0||n==1){
        return n;

    }

    return fibbo(n-1)+n;
 
    
}
int main(){
    cout<<fibbo(0);

}