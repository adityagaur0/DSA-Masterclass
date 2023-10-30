#include <iostream>
using namespace std;
int computeSquareRoot(int n){
    int s=0;
    int e=n;
    int ans;
    while(s<=e){
        int m=s+(e-s)/2;
        if(m*m<=n){
            ans=m;
            s=m+1;
        }else{
            e=m-1;
        }
    }
    return ans;
    
}
int main(){
    int n=64;
    cout<<computeSquareRoot(n);

}