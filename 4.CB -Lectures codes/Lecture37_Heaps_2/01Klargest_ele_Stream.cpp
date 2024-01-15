/*

Given an infinite stream of non-negative integers, design an algorithm to output the
top-K integers every time you encounter -1.

Example : Input = 4, 1, 2, -1, 3, -1 7 0 1 2 -1 8 -1 . . . ; K = 3
          Output = 1 2 4
                   2 3 4
                   3 4 7
                   4 7 8
                   . . .

*/
#include <iostream>
using namespace std;
#define pq prioeity_queue<int, vector<int>,greater<int>> // max heap
int main(){
    int k=3
    pq minHeap;
    int data;
    // asume first k elements of the stream do not contain -1
    for (int i = 0; i < k; i++) {
        cin >> data;
        minHeap.push(data);
    }

    

}