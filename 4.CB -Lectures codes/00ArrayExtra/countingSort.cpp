#include <iostream>
using namespace std;
// n =9 , k=3;
//i/p: 1,0,3,2,3,1,2,0,2

//o/p: 0,0,1,1,2,2,2,3,3

//UNSTABLE VERSION
int CountSort(int arr[],int n,int k){
    int freqArr[k+1];
    memset(freqArr,0,sizeof(freqArr));
    for(int i=0;i<n;i++){
        freqArr[arr[i]]++;

    }
    for(int i=0;i<k+1;i++){
        cout<<arr[i]<<" "<<freqArr[i]<<endl;
    }

    //now print the value from 0 to k
    for(int i=0;i<=k;i++){
        int j=freqArr[i];
        //we know that i has occured j time in the input
        for(int ii=0;ii<j;ii++){
            cout<<i<<" ";
        }
    }

    return 0;

}

// STABLE VERSION
int countSortStable(int arr[],int n, int k){
    int freq[k+1];
    memset(freq,0,sizeof(freq));
    //1.create freq array
    // 0,1,2,3
    // 2,2,3,2
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    for(int i=0;i<k+1;i++){
        cout<<freq[i]<<" ";
    }
    cout<<endl;
    //2. csum of array
    // 0,1,2,3
    // 2,4,7,9
    //freq[0] will be same.
    //freq[i]+=freq[i-1] for i>=1 and i<=k
    for(int i=1;i<=k;i++){
        freq[i]+=freq[i-1];
    }
    for(int i=0;i<k+1;i++){
        cout<<freq[i]<<" ";
    }
    cout<<endl;
    //3. array storing the starting index of each element.
    // 0,1,2,3
    // 0,2,4,7
    //freq_0 =  contain 2 elemnt [0,1] therefore, start index of 1 will be 2.
    //freq_1 = contain 4 element therefore start index of 2 will be 4 .
    // same for kk element
    //freq_0 = 0;
    // freq[k]=freq[k-1]; right shift freq array above
    for(int i=k;i>=1;i--){ //form end to start
        freq[i]=freq[i-1];
    }
    freq[0]=0; 
    for(int i=0;i<k+1;i++){
        cout<<freq[i]<<" ";
    }
    cout<<endl;

    //4.output array
    int outputArray[n];
    for(int i=0;i<n;i++){
        outputArray[freq[arr[i]]]=arr[i];
        freq[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        cout<<outputArray[i]<<" ";
    }
}
int main(){
    int arr[]={1,0,3,2,3,1,2,0,2};
    int n=sizeof(arr)/sizeof(int);
    int k=3;
    countSortStable(arr,n,k);
    return 0;

}