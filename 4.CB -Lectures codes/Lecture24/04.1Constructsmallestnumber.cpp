#include <iostream>

using namespace std;

bool used[10]={false};
//{false,false,false.......false};

//leetcode given n=8
string out="99999999"; //intmax

void construct(string pattern, string& num,int i){

    //base case
    if(pattern[i]=='\0'){
        // cout<<num<<endl;
        out=min(out,num);
        return;
    }

    // recursive case

    if(num.size()==0){
        for(int d=1;d<=9;d++){
        used[d]=true;
        num.push_back(d+'0');
        construct(pattern,num,i);
        used[d]=false;
        num.pop_back();

        }
        return;
    }

    //decide the next digit in'num'
    // find the previous num we add to num
    int x= (num[num.size()-1]) -'0'; //go to last index -1 
    //or
    //int x= num.back()-'0';
    if(pattern[i]=='I'){
        //next digit probably be higher that x[x+1,x+2....9]
        //for a single digit we have multiple options= loop
        for(int d=x+1;d<=9;d++){
            //check the digit is unique as not same as previous digits used
            if(used[d]==false){
                used[d]=true;//hence set the used to true as we dont want to use it again.
                num.push_back(d+'0');
                
                construct(pattern,num,i+1);
                //now for a single option we have multiple decisions we backtrack
                used[d]=false;
                num.pop_back();
            }
        }

        

    }else{ // =='D';
        ////next digit probably be lower than x[1,2... x-1]
        //for a single digit we have multiple options= loop
        for(int d=1;d<=x-1;d++){
            //check the digit is unique as not same as previous digits used
            if(used[d]==false){
                used[d]=true;
                num.push_back(d+'0');
                
                construct(pattern,num,i+1);
                //now for a single option we have multiple decisions we backtrack
                used[d]=false;
                num.pop_back();
            }
        }
    }
            
}
int main(){
    string pattern="IID";
    string num="";
    construct(pattern,num,0);
    cout<<out;
    return 0;
}