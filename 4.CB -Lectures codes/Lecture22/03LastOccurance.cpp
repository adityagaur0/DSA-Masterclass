#include <iostream>
using namespace std;
int f(int* x, int n,  int t, int i){
    //base case
    if(i<0){
        return -1;
    }
    
    if(x[i]==t){
        return i;
    }
    return f(x, n, t, i-1);
}

int main(){
	int x[] = {10, 20, 30, 20, 30};
	int n = sizeof(x) / sizeof(int);
	int t = 30;
	cout << f(x, n, t, n-1) << endl;


}