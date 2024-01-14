// g++ -std=c++11 01permutationsSum.cpp  
//./a.out
#include <iostream>
#include <vector>
using namespace std;

void heapify(vector<int>& v, int n, int i){
    int max_idx=i;
    int left_child_idx=2*i+1;
    while(left_child_idx< n and v[left_child_idx]> v[max_idx]){
        max_idx =left_child_idx;

    }
    int right_child_idx= 2*i+2;
    while(right_child_idx <n and v[right_child_idx]> v[max_idx]){
        max_idx=right_child_idx;
    }
    if(max_idx!=i){
        swap(v[i], v[max_idx]);
        heapify(v,n,max_idx);
    }
}
int main(){
    vector<int> v = {1, 3, 2, 7, 5, 4, 6, 9, 8};
    int n=v.size();

    //convert the vector into max heap(bottom uo fashion)
    for(int i=n-1;i>=0;i--){
        heapify(v,n,i);
    }
    for(int i: v){
        cout<< v[i];
    }
    

}