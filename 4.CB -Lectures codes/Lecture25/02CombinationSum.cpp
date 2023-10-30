// g++ -std=c++11 01permutationsSum.cpp  
//./a.out
#include <iostream>
#include <vector>

using namespace std;

void generatepermutation(int t,vector<int> c,vector<int>& combi,int i){
    //base case
    if(t==0){
        for(int candidate : combi){
            cout<<candidate<<" ";
        }
        cout<<endl;
        return;
    }

    //recursive case
    int n=c.size();
    for(int j=i;j<=n-1;j++){
        if(t-c[j]>=0){
            combi.push_back(c[j]);
            generatepermutation(t-c[j],c,combi,j+1);
            combi.pop_back();//back track
        }


    }

}
int main(){
    int target=7;
    vector<int> candidate={2, 3, 5, 7};
    vector<int> combi;
    generatepermutation(target,candidate,combi,0);


}