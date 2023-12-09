/*
g++ -std=c++11 
./a.out
*/ 

#include<iostream>
#include<stack>
#include<vector>
// 5 3 6 7 2 1 4
using namespace std;

void f(int* A,int n){
    stack<int> s;
    vector<int> out;

    //righth to left
    for(int i=n-1;i>=0;i--){
        //find the next greater element to the right of arr[i]
        /*
        condition:
        1. stack is non emptyt
        2. stack ka top hai voh arr[i] se chota hai
        eg 7 aaya toh right mein 2 hai voh usse bhi pop krega aur krta rahega jab takk stack mein usse bada ni mil jata
        */
       while(!s.empty() and s.top()<=A[i]){
        s.pop();
       }


       if(s.empty()){
        /*
        stack abhi empty hai toh  4 ka ngr koi hai hi ni toh print -1;
        */
       out.push_back(-1);
        // cout<<-1<<" ";
       }else{
        /*
        agar stack ka top element  arr[i] se bada hai toh print krdo 
        1 ka ngr 4 hai toh 4 print krdo

        */
       out.push_back(s.top());
    //    cout<<s.top()<<" ";
       }
       // aab -- jaane se pehele stack emin arr[i] push krte chalo kya pata voh kisi aur ka nearest ngr ho
       // ex 4  1and 2 ka hai sim 7 6 ka and 6 5,3 ka
       s.push(A[i]);



    }
    reverse(out.begin(), out.end());

	for (int i = 0; i < out.size(); i++) {
		cout << out[i] << " ";
	}

	cout << endl;


}

int main() {

	int A[] = {5, 3, 6, 7, 2, 1, 4};
	int n = sizeof(A) / sizeof(int);

	f(A, n);

	return 0;
}