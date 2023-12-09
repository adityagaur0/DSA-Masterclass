// g++ -std=c++11 01permutationsSum.cpp  
//./a.out
#include <iostream>
#include <stack>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> asteroidCollision(vector<int>& asteroids) {
    stack<int> s;
    for(int ast: asteroids){
        
        if((ast<0) and !s.empty() and s.top()>0){
            //collision
            /* 
            1. collision jab takk hote rahenge jab tak stack is nonempty 
            2. stack ke top pe joh asteroid hai uska wt +ve
            3. and uska wt is less than asteroid

            */
           bool flag=true;
            while(!s.empty() and s.top()>0){
                if(s.top()<abs(ast)){ // ast ka wt zada hai
                    s.pop();
                }else if(s.top()>abs(ast)){ // ast ka wt kam hai
                    flag=false;
                    break;
                }else{// same wt hai ast ka
                    s.pop();
                    flag=false;
                    break;
                }
            }
            /*
            ek conditon bachti ki humne -ve wala ast toh push hi ni kia
            and voh jab hi possible aagr top elemnt ka wt kam ho ast se
            */
           if(flag==true){
            s.push(ast);
           }





        }else{ 
            //no collision
            s.push(ast);

        }
        }
        //assume current asteroid will be destroid
        // current asteroid ' ast' will be destroyed
        //ast on the top of the stack and current asteroid will be destroyed/

        vector<int> out;
        while(!s.empty()){
            out.push_back(s.top());
            s.pop();
        }
        reverse(out.begin(),out.end());

        return out;

    


}



int main(){
    vector<int> asteroids={7,3,-4,5,2,-8,2,4,1,-4};
    

    vector<int> out= asteroidCollision(asteroids);
    for(int i=0;i<out.size();i++){
        cout<<out[i]<<" ";
    }
    cout<<endl;

}