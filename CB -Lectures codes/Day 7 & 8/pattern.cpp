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

int pattern8(int n){
    for(int i=1;i<=n;i++){
        int num=1;
        for(int j=1;j<=i;j++){
            cout<<num;
            cout<<"\t";
            //cout<<"\t";
            num++;
        }
        for(int j=n-i;j>=1;j--){
            cout<<"*";
            cout<<"\t";
        }
        for(int j=n-i;j>=2;j--){
            cout<<"*";
            cout<<"\t";
        }
        int num1=i;
        for(int j=1;j<=i;j++){
            
            
            if(num1==n){
                num1=n-1;
                

            }else if(num1==0){
                break;
            }
            cout<<num1;
            cout<<"\t";
            
            num1--;
            
          
            
        }        
        
        cout<<endl;
    }

}

int pattern9(int n){
    for(int i=1;i<=n;i++){
        int num=1;
        for(int j=n-i+1;j>=1;j--){
            cout<<num;
            num++;
        }
        for(int j=1;j<=i-1;j++){
            cout<<"*";
        }
        for(int j=1;j<=i-2;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}

int pattern10(int n){
    	for(int i=1;i<=n;i++){
		int num=i;
		for(int j=1;j<=i;j++){
			cout<<i;

		}
		int num2=i+1;
		for(int j=n-i;j>=1;j--){
			cout<<num2;
			num2++;
		}
		cout<<endl;
	}
}

int pattern11(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=n-i;j>=1;j--){
            cout<<"0";
        }
        cout<<endl;
    }

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
    cout<<endl;
    pattern8(n);
    cout<<endl;
    pattern9(7);
    cout<<endl;
    pattern10(5);
    cout<<endl;
    pattern11(5);
}