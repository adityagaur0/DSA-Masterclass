#include <iostream>
using namespace std;
int pattern1(int n){
    for(int row=1;row<=n;row++){
        char ch='A';
        for(int col=1;col<=n-row+1;col++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
    return 0;

}

int pattern2(int n){
    for(int row=1;row<=n;row++){
        char ch='A';
        for(int col=1;col<=n-row+1;col++){
            cout<<ch;
            ch++;
        }
        ch--;
         for(int col=1;col<=n-row+1;col++){
            cout<<ch;
            ch--;
        }
        cout<<endl;
    }
    return 0;

}

int pattern3(int n){
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout<<"*";

        }
        
        cout<<endl;
    }
    for(int row=1;row<=n;row++){
        for(int col=n-row;col>=1;col--){
            cout<<"*";

        }
        
        cout<<endl;
    }
    
    return 0;

}

int pattern4(int n){
    int colNum=1;
    for(int row=1;row<=n;row++){
        
        for(int col=1;col<=n-row;col++){
            cout<<" ";
            
        }

        for(int col=1;col<=row;col++){
            cout<<"*";
            
        }
        for(int col=1;col<=row-1;col++){

            cout<<"*";
            
            
        }
        cout<<endl;
    }
    for(int row=1;row<=n;row++){
        
       

        for(int col=row;col>=1;col--){
            cout<<" ";
            
        }
        // for(int col=row-1;col>=1;col--){

        //     cout<<"*";
            
            
        // }
        for(int col=n-row;col>=1;col--){
            cout<<"*";
            
        }

        cout<<endl;
    }


    return 0;

}

int pattern5(int n){
    for(int i=1;i<=n;i++){
        int count=1;
        for(int j=1;j<=i;j++){
            cout<<count;
            count++;
        }
        for(int j=n-i;j>=1;j--){
            cout<<"*";
        }
        cout<<endl;
    }

}

int pattern6(int n){

    for(int i=1;i<=n;i++){
        //space row col n-1;
        for(int j=n-i;j>=1;j--){
            cout<<" ";
        }
        int count=i;
        for(int j=1;j<=i;j++){
            cout<<count;
            count++;
        }

        int num=count-2;    
        for(int j=2;j<=i;j++){
            cout<<num;
            num--;
        }
        cout<<endl;
    }

}

int pattern7(int n){
    int zero=0;
    for(int i=1;i<=n;i++){
        int count=i;
        cout<<i;
        for(int j=3;j<=i;j++){
            cout<<"0";
        }
        if(i>1){
            cout<<i;
        }
        
        cout<<endl;
    }
    
}
// 0 1 1 2 3 5 8 13 21 34
int fibbo(int p){
    if(p==0||p==1){
        return p;

    }
    int i=2;
    int a=0;
    int b=1;
    int c;
    while(i<p){

        c=a+b;
        a=b;
        b=c;
        i++;
        
    }
    return c;


}

int pattern8(int n){


    int num=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<< fibbo(num);
            num++;
           

        }
        cout<<endl;
    }

    

}


int main(){
    int n=5;
    pattern1(5);
    cout<<endl;
    pattern2(n);//<<endl;
    cout<<endl;
    pattern3(n);
    cout<<endl;
    pattern4(n);
    cout<<endl;
    pattern5(7);
    cout<<endl;
    pattern6(4);
    cout<<endl;
    pattern8(4);
    return 0;

}