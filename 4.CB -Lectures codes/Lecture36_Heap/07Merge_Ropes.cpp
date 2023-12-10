/*
g++ -std=c++11 
./a.out
*/ 
#include <iostream>
#include <queue>
using namespace std;
int main(){
    vector<int> rope={4,3,2,6};
    //min heap;
    priority_queue<int, vector<int>, greater<int>> minheap(rope.begin(),rope.end());

    int min_cost=0;

    while(minheap.size()>1){
        //1. pop two min ropes from min heap
        int x=minheap.top(); minheap.pop();
        int y=minheap.top(); minheap.pop();
        //2.merge min ropes and track cost
        min_cost+= (x+y);
        
        //3. insert merge ropes into heap
        minheap.push(x+y);
    }
    cout<< min_cost;

}