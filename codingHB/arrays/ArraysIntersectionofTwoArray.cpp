#include<iostream>
#include <list>
#include <algorithm>
using namespace std;
int intersection(int arr1[],int arr2[],int n){
	list<int> mlist;
    int i=0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr1[i] == arr2[j]) {
                mlist.push_back(arr2[j]);
                break;  // Move to the next element in arr1
            }
        }
    }
    
    mlist.sort();
    for (int num : mlist) {
        cout << num << ' ';
    }
	return 0;

}
int main() {
	int n=7;
	int arr1[]={1 ,2 ,3 ,1, 2, 4, 1};
	int arr2[]={2 ,1, 3, 1, 5, 2, 2};
	// for(int i=0;i<n;i++){
	// 	cin>>arr1[i];
	// }
	// for(int i=0;i<n;i++){
	// 	cin>>arr2[i];
	// }
	intersection(arr1,arr2,n);
	return 0;
}