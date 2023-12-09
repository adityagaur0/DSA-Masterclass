/*
g++ -std=c++11 
./a.out
*/ 
#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
// #include<vector>
using namespace std;

void f(int* A, int n) {


	stack<int> s; // we are tracking indices

	vector<int> v;

    for(int i=n-1;i>=0;i--){

        while(!s.empty() and A[s.top()]>=A[i]){
            s.pop();
        }

		if (s.empty()) {
			v.push_back(n);
		} else {
			v.push_back(s.top());
		}


        s.push(i);
    }

	reverse(v.begin(), v.end());
    int count=0;

	for (int i = 0; i < v.size(); i++) {
		count+=v[i]-i;
	}

	cout << count;



}




int main() {

	int A[] = {1,4,2,5,3,9};
	int n = sizeof(A) / sizeof(int);

	f(A, n);

	return 0;
}