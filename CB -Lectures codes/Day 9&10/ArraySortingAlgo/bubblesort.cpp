#include <iostream>
using namespace std;
int bubblesort(int arr[],int n){
    int totalComparisons=0;
    
    //iterate over n-1 passes starting from the 1st pass and going towards the n-1 passes.
    for(int i=1;i<n;i++){
        
        // in i th path place the largest element in the unsorted part of the array to its sorted pass.
        bool flag=false;//assume flag to be false
        for(int j=0;j<n-i;j++){
            //in the i th pass,  we do n-i comparison. 
            //0<=j<n-i
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=true;
            }
            totalComparisons++;
        }
        if(flag==false){//reason to add flag is because if the array is already sorted why should be there is comaparisons.
            break;
        }
    }
    cout<<"total comparisons= "<<totalComparisons;
    cout<<endl;
    return 0;
}
int main(){
    int arr[]={50,40,30,20,10};
    int n= sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}