#include <iostream>
using namespace std;
//1.with divide
int Product(int arr[],int n){
    int product=1;
    for(int i=0;i<n;i++){
        product*=arr[i];
    } 
    for(int i=0;i<n;i++){
        cout<<product/arr[i]<<" ";
    }
    return 0;

}
//2.without divide. BruteForce
int Product2(int arr[],int n){
    int answer[100]; //based on constraints

    for(int i=0;i<n;i++){
        //compute answer[i]=l1*r1

        //li:product of all element form 0 to i-1;
        int l1=1;
        for(int j=0;j<=i-1;j++){
            l1*=arr[j];
        }

        //ri: product of all element from i+1 to n-1;
        int r1=1;
        for(int j=i+1;j<=n-1;j++){
            r1*=arr[j];
        }

        answer[i]=l1*r1;
    }

    for(int i=0;i<n;i++){
        cout<<answer[i]<<" ";
    }
    return 0;
}
//3. Best approach O(N^3)
int Product3(int arr[],int n){

    int l[100];
    l[0]=1;
    for(int i=1;i<=n-1;i++){
        l[i]=l[i-1]*arr[i-1];

    }
     int r[100];
     r[n-1]=1;
     for(int i=n-2;i>=0;i--){
        r[i]=r[i+1]*arr[i+1];
     }
    int ans[100];
    for(int i=0;i<=n-1;i++){
        ans[i]=l[i]*r[i];
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }

return 0;
}


int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    Product3(arr,n);
return 0;
}