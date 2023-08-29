class Solution {
public:

    bool isAlphabet(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <='Z')||(ch >= '0' && ch <= '9');
    }

    char toLowercase(char ch){
        if(ch>='a' && ch<='z'){
            return ch;
        }else{
            char temp=ch- 'A'+'a';
            return temp;
        }
    }
    bool isPalindrome(string s) {
        int start=0;
        int end=s.length()-1;
        while(start<end){
            if(!isAlphabet(s[start])){
                start++;
                continue;

            }
            else if(!isAlphabet(s[end])){
                end--;
                continue;

            }else{
                if(toLowercase(s[start])!=toLowercase(s[end])){
                return false;
            }else{
                start++;
                end--;
            }
            }
        }
            
        return true;
        

        
    }
};