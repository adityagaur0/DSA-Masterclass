#include <iostream>
using namespace std;
string SubString(string str){
    for(int i=0;i<str.size();i++){
        for(int j=i;j<str.size();j++){
            for(int k=i;k<=j;k++){
                cout<<str[k];
            }
            cout<<endl;
        }
        cout<<endl;
    }
}
int main(){
    string str="abaaba";
    SubString(str);

}