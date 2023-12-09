/*
g++ -std=c++11 
./a.out
*/ 
#include <vector>
#include <iostream>
#include <stack>
using namespace std;
bool find132pattern(vector<int>& nums){
    /*
    to find 123 pattern aka i,j,k
    - i<j<k;
    - nums[i]<nums[k]<nums[j]
    soln:
    find
    use left min array to find the min of left side of j and marks it as nums[i];
    *** leftmin[j]=nums[i];
    for right side use stack to find the nearest greater element to the right.
    ** which is nums[i]<nums[k]<nums[j]


    */
    int n=nums.size();
    //leftmin
    //nums[i]
    vector<int> leftmin(n);
    leftmin[0]=nums[0];
    for(int i=1;i<n;i++){
        leftmin[i]=min(nums[i],leftmin[i-1]);
    }
    // nums[k]
    stack<int> s;
    for(int j=n-1;j>=0;j--){
        
        int nums_i=leftmin[j];
        //find the next greater element of nums_i

        while(!s.empty() and s.top()<=nums_i){
            s.pop();
        }

        //check s.is not empty and s.top is less than equal to nums[j]
        if(!s.empty() and s.top()< nums[j]){
            return true; //we find 132 patttern
        }
        s.push(nums[j]);
    }
    return false;




}
int main(){
    vector<int> nums={3,4,6,2,1,5};
    find132pattern(nums)?cout<<"true"<<endl:cout<<"false"<<endl;
 }