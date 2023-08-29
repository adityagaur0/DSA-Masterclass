#include <iostream>
using namespace std;
bool checkPrime(int n){
    if(n==1||n==2){
        return true;
    }
    return n%2
}

int main(){
    int n;
    cin>>n;
    cout<<checkPrime(n);

}