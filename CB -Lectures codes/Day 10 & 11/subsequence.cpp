#include <iostream>
#include <cmath>
using namespace std;
int Genratesubseq(int arr[],int n){

    //find total number of bits. 2^n
    int tbits=pow(2,n);
    // total 0 ,1,2,3,4,5,6,7 binary number for n=3 ;
    for(int i=0;i<tbits;i++){
        cout<<i<<" : ";
        //iterate over each 10 20 30 to check which 0 0 0 is set;
        for(int j=0;j<n;j++){
            //check out of 3 which bit is set;
            if(i&(1<<j)){
                cout<<arr[j]<<" ";
            }
            
        }
        cout<<endl;
    }

    

}
int main(){
    int arr[]={10,20,30};
    int n=sizeof(arr)/sizeof(n);
    Genratesubseq(arr,n);
}