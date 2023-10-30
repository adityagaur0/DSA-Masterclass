#include <iostream>
using namespace std;

void merge(int* arr,int s, int m,int e){
    int i=s;
    int j=m+1;
    int k=s;
    int crr[100];
    while( i<=m &&  j<=e){
        if(arr[i]<=arr[j]){
            crr[k]=arr[i];
            k++;
            i++;

        }else{
            crr[k]=arr[j];
            k++;
            j++;
        }

    }
    while(i<=m){
        crr[k]=arr[i];
        k++;
        i++;
    }
    while(j<=e){
        crr[k]=arr[j];
        k++;
        j++;
    }

    for(int l=s;l<=e;l++){
        arr[l]=crr[l];
    }


}
void MergeSort(int* arr,int s,int e){

    if(e==s){
        return ;
    }
    //recur
    //1.divide th subarray into two parts around the mid pts;
    int m=s+(e-s)/2;

    //2. recursively sort the two subarray arr[0...m] and arr[m+1 ... n-1]
    //ask friend

    MergeSort(arr,s,m);
    MergeSort(arr,m+1,e);

    //3. merge two sorted subarrays such the merge arrayy is also sorted.

    merge(arr,s,m,e);


}
int main(){
    int arr[]={50,40,30,20,10};
    int n=sizeof(arr)/sizeof(int);
    MergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

}