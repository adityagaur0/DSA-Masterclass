#include <iostream>
using namespace std;
int maxi(int a,int b,int c){
    int max=0;
    if(a<b){
        if(b<c){
            max=c;
        }else{
            max=b;
        }
    }else {
        if(a<c){
            max=c;
        }else{
            max=a;
        }
    }
    return max;

}
int main(){
    int a=2;
    int b=3;
    int c=4;
    cout<<maxi(2,6,4);
}