// Input 
// [4, 5, 3, 2, 5]
// 3
// 0 3
// 2 4
// 1 3
// Output
// 14 (4+5+3+2)
// 10 (3+2+5)
// 10 (5+3+2)

//without using prefix sum
#include <iostream>
using namespace std;
int main(){
   int arr[]={4, 5, 3, 2, 5}; 
   //int arr1[];
   int q=3;
   int a,b;
   
   for(int i=0;i<q;i++){
       cin>>a>>b;
       int sum=0;
       for(int j=a;j<=b;j++){
           sum+=arr[j];
           
       }
       cout<<sum<<endl;
   }
}
