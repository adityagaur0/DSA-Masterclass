#include <iostream>
#include <cmath>
using namespace std;
int GenratesubArr(int arr[],int n){
    //iterate all over possible start index
    //0 1 2 3 ...n
    for(int i=0;i<=n-1;i++){
        //for each start index i,iterate all over possible ending index
        // i ..0 1 2..n-1
        for(int j=i;j<=n-1;j++){

            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
    

}
int main(){
    int arr[]={10,20,30};
    int n=sizeof(arr)/sizeof(n);
    GenratesubArr(arr,n);
}