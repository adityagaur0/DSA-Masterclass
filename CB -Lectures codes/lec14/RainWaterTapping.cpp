#include <iostream>
using namespace std;
//1.BruteForce
int totalWater(int h[],int n){
    //waterTotal=w1+w2+w3+w4...
    //w1=min(l1,r1)-h1;
    int WTotal=0;
    for(int i=0;i<n;i++){
        //li: ht of tallest building in left.
        int li=h[i];
        for(int j=i-1;j>=0;j--){
            if(h[j]>li){
                li=h[j];
            }
        }
        //ri: ht of tallest building in right.
        int ri=h[i];
        for(int j=i+1;j<=n-1;j++){
            if(h[j]>ri){
                ri=h[j];
            }
        }

        int w_i=min(li,ri)-h[i];
        WTotal+=w_i;

    }
    cout<<WTotal;
    return 0;


}

//2. efficient Approach 
// TC: O(n)
// SC: O(2n)
int totalWater2(int h[],int n){
    //waterTotal=w1+w2+w3+w4...
    //w1=min(l1,r1)-h1;

    int l[100];
    l[0]=h[0];
    for(int i=1;i<n;i++){
        l[i]=max(l[i-1],h[i]);
    }
    int r[100];
    r[n-1]=h[n-1];
    for(int i=n-2;i>=0;i--){
        r[i]=max(r[i+1],h[i]);
    }

    int WTotal=0;
    for(int i=0;i<n;i++){
        
        int w_i=min(l[i],r[i])-h[i];
        WTotal+=w_i;

    }
    cout<<WTotal;
    return 0;

}

//3 more effcient then 2nd;
// SC: O(n)

int totalWater3(int arr[],int n){
    int r[100];
    r[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        r[i]=max(r[i+1],arr[i]);
    }
    int li=arr[0];
    int watercount=0;
    for(int i=0;i<n;i++){

        li=max(li,arr[i]);

        int w_i=min(li,r[i])-arr[i];
        watercount+=w_i;
    }
    cout<<watercount;
    return 0;
}


//4. moreefficient then third:
// TC: O(N)
// SC: O(1)

int totalWater4(int arr[],int n){
    int i=0;
    int j=n-1;
    int l=0;
    int r=0;
    int watercount=0;
    while(i<=j){
        l=max(l,arr[i]);
        r=max(r,arr[j]);

        if(l<r){
            int w_i=l-arr[i];
            watercount+=w_i;

            i++;
        }else{
            int w_j=r-arr[j];
            watercount+=w_j;
            j--;
        }


    }
    cout<< watercount;
    return 0;

}

int main(){
    int arr[]={1,0,2,1,0,1,3,2,1,2,1};
    int n=sizeof(arr)/sizeof(int);
    totalWater4(arr,n);
    return 0;
}