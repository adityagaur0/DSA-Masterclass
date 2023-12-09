/*

	Implementation of the heap/priority_queue data structure.

*/

#include<iostream>
#include<vector>

using namespace std;

class minHeap {

	vector<int> v; // internal representation of the minHeap

    void heapify(int i){
        int min_idx=i;
        int left_child=2*i+1;
        if(left_child<v.size() and v[left_child]<v[min_idx]){
            min_idx=left_child;
        }
        int right_child=2*i+2;
        if(right_child<v.size() and v[right_child]<v[min_idx]){
            min_idx=right_child;
        }

        if(min_idx!=i){
            swap(v[min_idx],v[i]);
            heapify(min_idx);
        }
    }

public :

	// time : O(logn)

    void push(int val){
        v.push_back(val);
        int childIdx=v.size()-1; //vector ke last mein push kia 
        int parentIdx=childIdx%2==0? (childIdx/2)-1 : childIdx/2; //parent ka idx

        //hum swap krnege tree mein child ko parent se jabtakk
        // child chota hai parent se . jab child bada huaa tab hum ruk jayenge 
        // aka try krenge ki child ka idx 0 ke equal na ho usse pehele hi swap rokk denge
        while(childIdx!=0 and v[childIdx]<v[parentIdx]){
            swap(v[childIdx],v[parentIdx]);
            childIdx=parentIdx;// new child idx == last parent ka idx
            parentIdx=childIdx%2==0? (childIdx/2)-1 : childIdx/2; 

        }



    }

    //time =0(logn);
    void pop(){
        swap(v[0],v[v.size()-1]);
        v.pop_back();
        heapify(0);
    }

    int top(){
        return v[0];
    }


    int size(){
        return v.size();
    }
    bool empty(){
        return v.empty();
    }


};

int main() {

	minHeap m;

	m.push(9);
	m.push(7);
	m.push(8);
	m.push(5);
	m.push(4);
	m.push(6);
	m.push(3);
	m.push(2);
	m.push(1);

	cout << m.size() << endl;

	while (!m.empty()) {
		cout << m.top() << " ";
		m.pop();
	}

	cout << endl;

	cout << m.size() << endl;

	return 0;
}