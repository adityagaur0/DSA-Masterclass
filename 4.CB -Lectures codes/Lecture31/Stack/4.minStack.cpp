#include <iostream>
#include <stack>
using namespace std;

//space : o(n) due to min stack
// in the worst case it is possible each element we put into the custom stack is samller or equal to the last  
// element . therefore min stack always have n elements

// kyuki agr main stack mein 10 bar 10 dala toh min stack emin bhi 10 bar 10 jayega 
// same aagr hum koi chotti value dalte usmein.
// class custom_stack{
//     stack<int> main_Stack;
    
//     stack<int> min_Stack; //track min so far

//     public:

//     void push(int data){
//         main_Stack.push(data);
//         if(min_Stack.empty() or data<=min_Stack.top()){
//             min_Stack.push(data);
//         }

//     }
//     void pop(){
//         if(empty()){
//             //stack is empty, underflow
//             return;
//         }
//         int temp=main_Stack.top();
//         main_Stack.pop();
//         if(min_Stack.top()== temp){
//             min_Stack.pop(); 
//         }
        
//     }
//     int size(){
//         return main_Stack.size();

//     }
//     bool empty(){
//         return main_Stack.empty();

//     }
//     int top(){
//         return main_Stack.top();
//     }
//     int minTop(){
//         return min_Stack.top();

//     }
// };


class custom_stack {
    stack<int> main_Stack;
    stack<int> min_Stack;
    public:
    void push(int data){
        main_Stack.push(data);
        if( min_Stack.empty() or min_Stack.top()>=data){
            min_Stack.push(data);
        }

    }
    void pop(){
        if(empty()){//if stack is empty
            return;
        }
        int temp=main_Stack.top();
        main_Stack.pop();
        if(min_Stack.top()==temp){
            min_Stack.pop();
        }
    }
    bool empty(){
        return main_Stack.empty();
    }
    int top(){
        return main_Stack.top();

    }
    int getMin(){
        return min_Stack.top();

    }

};
int main(){

    custom_stack cs;
    cs.push(20);
    cs.push(10);
    cs.push(10);
    cs.push(0);
    cs.pop();
    cs.pop();
    cs.pop();
    cout<<"top: "<<cs.top()<<endl;
    cout<<" mintop: "<<cs.getMin()<<endl;
    cs.pop();
    return 0;

}