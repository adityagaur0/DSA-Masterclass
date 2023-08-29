#include <iostream>
using namespace std;
int pattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=n-1;j>=i;j--){
            cout<<"-";
        }
        for(int j=1;j<=n;j++){
            if(i==1||j==1||i==n||j==n){
                cout<<"*";
            }else{
            cout<<" ";
            }
            //cout<<"*";
        }
        cout<<endl;
    }
}

int pattern1(int n){
    int m=(2*n)-1;
    //phase 1
    for(int i=1;i<=m;i++){
        cout<<"*"<<" ";
    }
    cout<<endl;
    //phase2
    for(int i=1;i<=n-1;i++){
        for(int j=n-1;j>=i;j--){
            cout<<"*"<<" ";
        }
        //cout<<endl;
        for(int j=1;j<=2*i-1;j++){
        cout<<" "<<" ";
        }
        for(int j=n-1;j>=i;j--){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    
    //phase 3
    for(int i=1;i<=n-2;i++){
        for(int j=1;j<=i+1;j++){
            cout<<"*"<<" ";
        }
		for (int j = 2*(n-i)-3; j>=1; j--) {
			cout << " "<<" ";
		}
		for (int j = 1; j <= i + 1; j++) {
			cout << "*"<<" ";
		}
        cout<<endl;
    }
    
    //phase 4
    for(int i=1;i<=m;i++){
        cout<<"*"<<" ";
    }

}
int main(){
    int n=5;
    pattern(n);
    cout<<endl;
    pattern1(n);
    
}