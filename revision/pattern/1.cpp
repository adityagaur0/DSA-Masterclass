#include <iostream>
using namespace std;
int pattern1(int n){
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout<<"*";

        }
        cout<<endl;
    }
    return 0;

}


int pattern2(int n){
    for(int row=1;row<=n;row++){
        int colNum=1;
        for(int col=1;col<=row;col++){
            cout<<colNum<<" ";
            colNum++;

        }
        cout<<endl;
    }
    return 0;

}

int pattern3(int n){
    int colNum=1;
    for(int row=1;row<=n;row++){
        
        for(int col=1;col<=row;col++){
            cout<<colNum<<" ";
            colNum++;

        }
        cout<<endl;
    }
    return 0;

}

int pattern4(int n){
    int colNum=1;
    for(int row=1;row<=n;row++){
        
        for(int col=1;col<=row;col++){
            if((row+col)%2==0){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
            colNum++;

        }
        cout<<endl;
    }
    return 0;

}

int pattern5(int n){
    int colNum=1;
    for(int row=1;row<=n;row++){
        
        for(int col=1;col<=n-row;col++){
            cout<<" ";
            
        }

        for(int col=1;col<=row;col++){
            cout<<"*";
            
        }
        cout<<endl;
    }
    return 0;

}

int pattern6(int n){
    
    for(int row=1;row<=n;row++){
        
        for(int col=1;col<=n-row;col++){
            cout<<" ";
            
        }
        int colNum=row;
        for(int col=1;col<=row;col++){

            cout<<colNum++;
            
        }
        cout<<endl;
    }
    return 0;

}

int pattern7(int n){
    
    for(int row=1;row<=n;row++){
        
        for(int col=1;col<=n-row;col++){
            cout<<" ";
            
        }
        int colNum=row;
        for(int col=1;col<=row;col++){

            cout<<colNum++;
            
        }
        int coli=colNum-2;
        for(int col=1;col<=row-1;col++){

            cout<<coli;
            coli--;
            
        }



        cout<<endl;
    }
    return 0;

}

int main(){
    int n=5;
    //cin>>n;
    pattern1(n);
    cout<<endl;
    pattern2(n);
    cout<<endl;
    pattern3(n);
    cout<<endl;
    pattern4(n);
    cout<<endl;
    pattern5(n);
    cout<<endl;
    pattern6(n);
    cout<<endl;
    pattern7(n);
}