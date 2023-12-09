/*
g++ -std=c++11 
./a.out
*/ 
#include<iostream>
#include<stack>
#include <vector>
#include <utility> 

using namespace std;

vector<int> f(int* arr,int n){
    stack<pair<int,int>> s;
    vector<int> span;
    for(int i=0;i<n;i++){

        while(!s.empty() and s.top().first<=arr[i]){
            s.pop();
        }
        int j;// to track the nearest greater element to left of A[i]
        if(s.empty()){
            j=-1;
        }else{// s.top().first>arr[i]
            j=s.top().second;
 
        }
        
    
    span.push_back(i-j);
    s.push({arr[i],i});
    }
    return span;

}
//void f(int* A, int n) {

// 	stack<int> s; // <index>

// 	vector<int> v;

// 	for (int i = 0; i <= n - 1; i++) {

// 		// find the nearest greater element to the left of A[i]

// 		while (!s.empty() and A[s.top()] <= A[i]) {
// 			s.pop();
// 		}

// 		int j;

// 		if (s.empty()) {
// 			j = -1;
// 		} else {
// 			j = s.top();
// 		}

// 		v.push_back(i - j);

// 		s.push(i);

// 	}

// 	for (int i = 0; i < v.size(); i++) {
// 		cout << v[i] << " ";
// 	}

// 	cout << endl;

// }

int main() {

	int A[] = {100, 80, 60, 70, 60, 75, 185};
	int n = sizeof(A) / sizeof(int);
    vector<int> span=f(A,n);

    for(int i=0;i<span.size();i++){
        cout<<span[i]<<" ";
    }
    cout<<endl;

	return 0;
}

