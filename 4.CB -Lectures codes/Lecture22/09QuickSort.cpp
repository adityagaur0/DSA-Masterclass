#include <iostream>
using namespace std;
int partition(int*arr ,int s,int e){
    int i=s-1;
    int j=s;
    int pivot=arr[e];
    //check left and right
    while(j<e){
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
        j++;

    }

    //swap pivot with i+1
    swap(arr[i+1],arr[e]);

    //return pivot index;
    return i+1;

}
void quicksort(int* arr,int s,int e){
    //base case
    if(s==e){
        //sort the array[s...e] which is already sorted
        return;
    }

    if(s>e){
        //sort empty array
        return;
    }


    //recursive case
    //1.partition the array arr[s....e] around the pivot arr[e];
    int m=partition(arr,s,e);


    //2. recursively sort the left arr[s...m-1] and right arr[m+1....e] partiton ;
    quicksort(arr,s,m-1);
    quicksort(arr,m+1,e);





}
int main(){
    int arr[]={60,50,10,20,40,30};
    int n=sizeof(arr)/sizeof(int);
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}