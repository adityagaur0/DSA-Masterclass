#include <iostream>
using namespace std;

int countCharacter(string str){
    int Lc=0;
    int Uc=0;
    int digit=0;
    int whitespace=0;
    int special=0;
    for(char ch : str){
        if(ch>='a'&&ch<='z'){
            Lc++;
        }else if(ch>='A'&&ch<='Z'){
            Uc++;
        }else if(ch>='0' &&ch<='9'){
            digit++;
        }else if(ch==' '||ch=='\t'||ch=='\n'){
            whitespace++;
        }
        else{
            special++;
        }

    

    }
    cout<< Lc<<endl;
    cout<< Uc<<endl;
    cout<< digit<<endl;
    cout<< whitespace<<endl;
    cout<< special<<endl;
    
    
    return 0;

}

int main(){
    string str;
    cout<<"enter the sequence"<<endl;
    getline(cin,str);
    countCharacter(str);
    // cout<<ch<<endl;
    // cout<<(int) ch;
    return 0;
}