#include <iostream>
using namespace std;
void f(int* x, int n,  int t, int i){
    //base case
    if(i<0){
        return ;
    }
    
    if(x[i]==t){
        cout<< i;
    }
    return f(x, n, t, i-1);
}

int main(){
	int x[] = {10, 20, 30, 20, 30};
	int n = sizeof(x) / sizeof(int);
	int t = 20;
	f(x, n, t, n-1);


}