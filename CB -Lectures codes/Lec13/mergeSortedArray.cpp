#include <iostream>
using namespace std;
//Algo.
//take a new array of size n+m. then compare first element od both the array.
int MergeSortedArray(int arr1[],int arr2[],int m,int n){
    int n3=m+n;
    int mergeArr[20];
    int i=0;
    int j=0;
    int k=0;
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            mergeArr[k]=arr1[i];
            k++;
            i++;
        }else{
            mergeArr[k]=arr2[j];
            j++;
            k++;

        }

    }
    while(i<m){
        mergeArr[k]=arr1[i];
        i++;
        k++;
    }
    while(j<n){
        mergeArr[k]=arr2[j];
        j++;
        k++;
    }
    for(int i=0;i<n3;i++){
        cout<<mergeArr[i]<<" ";
    }


}


int main(){
    int arr1[]={10,30,50,70};
    int arr2[]={20,40,60};

    int n1=sizeof(arr1)/sizeof(int);
    int n2=sizeof(arr2)/sizeof(int);
    MergeSortedArray(arr1,arr2,n1,n2);
    return 0;

}