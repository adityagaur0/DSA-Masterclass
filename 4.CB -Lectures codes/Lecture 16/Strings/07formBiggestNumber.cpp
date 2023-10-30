// Given an integer array, design an algorithm to arrange the 
// elements of the array in a way that the arrangement 
// yield the biggest number. 
// Example  
// Input  
// 54 ,546 ,548 ,60 
// Output : 6054854654 

 #include <iostream>
 #include <vector>
 using namespace std;
 int formBiggestNumber(int arr[],int n){
    vector<string> s;
    for (int i = 0; i < n; i++) {
        s.push_back(to_string(arr[i]));
    }
    sort(s.begin(),s.end(),greater<string>());
    for(int i=0;i<n;i++){
        cout<<s[i];
    }

 }
 int main(){
    int arr[]={54,546,548,60};
     int n = sizeof(arr) / sizeof(arr[0]);
    formBiggestNumber(arr,n);

 }

