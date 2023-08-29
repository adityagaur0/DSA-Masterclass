#include <iostream>
using namespace std;
bool fibbo(int n){
    if(n==0||n==1){
        return true;

    }

    return (fibbo(n-1)+n)==n?true:false;
 
    
}
int main(){
    int n;
    cin>>n;
    cout<<fibbo(n);

}