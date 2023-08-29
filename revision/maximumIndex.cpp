    #include <iostream>
    using namespace std;
    
    int maxIndexDiff(int Arr[], int N) 
    
    { 
        int i=0;
        int j=N-1;
        int maxi=INT_MIN;
        while(i<j){
            if(Arr[i]<Arr[j]){
                maxi=max(maxi,j-i);
            }
            i++;
            j--;
            
        }
        return maxi;
    }
    int main(){
        int arr[]={34, 8, 10, 3, 2, 80, 30, 33, 1};
        int n=sizeof(arr)/sizeof(n);
        cout<<maxIndexDiff(arr,n);

        
    }