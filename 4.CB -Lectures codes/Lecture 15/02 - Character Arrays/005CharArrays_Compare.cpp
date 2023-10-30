#include <iostream>
#include<cstring>
// #include<algorithm>
using namespace std;
int main(){
	char s1[] = "azbcdef";
	char s2[] = "zzbcdef";
    int ans =strcmp(s1,s2);
    if(ans==0){
        cout<<"equal";

    }else if(ans>0){
        cout<<s1<<">"<<s2;
    }else{
        cout<<s1<<"<"<<s2;
    }

}