#include <iostream>
using namespace std;
int main(){
    int n=42;
    int count=0;
    for(int i=0;i<=31;i++){
        if(n&(1<<i)){
            count++;
        }
        
    }
    cout<<count;
}