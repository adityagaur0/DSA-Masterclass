#include <iostream>
#include <stack>
using namespace std;
void print(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    cout<<endl;

}
// //brute force
// void reverseStack(stack<int> s1){
//     stack<int> s2;
//     while(!s1.empty()){
//         s2.push(s1.top());
//         s1.pop();
//     }
//     print(s2);
// }

void insertAtBottom(stack<int>& s,int data){
    //base case
    if(s.empty()){
        s.push(data);
        return;
    }

    // recursive case
    int x= s.top();

    s.pop();

    insertAtBottom(s,data);

    s.push(x);
    
}

void reverseStack(stack<int>& s){ //& means pass by reference not pass by value
    //base case
    if(s.empty()){
        return;
    }

    // recursive case
    int x=s.top();
    s.pop();
    reverseStack(s);
    insertAtBottom(s,x);

}
int main(){
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    print(s);
    reverseStack(s);
    print(s);



}
