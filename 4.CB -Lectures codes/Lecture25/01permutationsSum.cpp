// g++ -std=c++11 01permutationsSum.cpp  
//./a.out
#include <iostream>
#include <vector>

using namespace std;

void generatepermutation(int t,vector<int> c,vector<int>& perm){
    //base case
    if(t==0){
        for(int candidate : perm){
            cout<<candidate<<" ";
            
        }
        cout<<endl;
        return;
    }

    //recursive case
    int n=c.size();
    for(int j=0;j<=n-1;j++){
        if(t-c[j]>=0){
            perm.push_back(c[j]);
            generatepermutation(t-c[j],c,perm);
            perm.pop_back();//back track
        }


    }

}
int main(){
    //int target=7;
    int target=4;
   // vector<int> candidate={2, 3, 5, 7};
    vector<int> candidate={1,2,3};
    
  

    vector<int> perm;
    generatepermutation(target,candidate,perm);


}