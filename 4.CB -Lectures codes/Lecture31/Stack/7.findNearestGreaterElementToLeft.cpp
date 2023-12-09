/*
g++ -std=c++11 
./a.out
*/ 

#include<iostream>
#include<stack>
#include<vector>
// 5 3  6  7 2 1 4
//-1 5 -1 -1 7 2 7
using namespace std;

void f(int* arr,int n){
    stack<int> s;

    for(int i=0;i<n;i++){

        while(!s.empty() and s.top()<arr[i]){
            //7
            s.pop();
        }

        if(s.empty()){
            //5

            cout<<-1<<" ";
        }else{
            //3
            cout<<s.top()<<" ";
        }
        s.push(arr[i]);
    }
}

int main() {

	int A[] = {5, 3, 6, 7, 2, 1, 4};
	int n = sizeof(A) / sizeof(int);

	f(A, n);

	return 0;
}