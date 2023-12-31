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

    for(int i=0;i<n;i++){

        while(!s.empty() and A[s.top()]>=A[i]){
            s.pop();
        }

		if (s.empty()) {
			v.push_back(-1);
		} else {
			v.push_back(s.top());
		}


        s.push(i);
    }

	// reverse(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << endl;



}



int main() {

	int A[] = {0, 3, 5, 4, 1, 6, 2};
	int n = sizeof(A) / sizeof(int);

	f(A, n);

	return 0;
}