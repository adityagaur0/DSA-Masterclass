#include <iostream>
using namespace std;
int sum(int n ){
    int sumN=0;
    for(int i=0;i<=n;i++){
        sumN+=i;
    }
    return sumN;
}
int main(){
    int n;
    cout<<sum(123);
    
    
}