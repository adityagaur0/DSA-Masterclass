#include <iostream>
#include <cmath>
using namespace std;
bool primeNum(int n){
    if(n==1||n==2){
        return true;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
        

    }
    return true;
    
 
    
}
int main(){
    int n;
    cin>>n;
    cout<<primeNum(n);

}