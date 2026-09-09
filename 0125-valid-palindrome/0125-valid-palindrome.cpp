class Solution {
public:
    bool isValid(char ch){
        if((ch>= '0' && ch<= '9') || (tolower(ch) >= 'a' && tolower(ch)<= 'z') ) return true;
        return false;
    }
    bool isPalindrome(string s) {
        int n = s.size();
        int st = 0;
        int e = n-1;
       while(st<e){
            while(st < e && !isValid(s[st])) st++;
            while(st < e && !isValid(s[e])) e--;
            if(tolower(s[st]) != tolower(s[e])) return false;
            else{
                st++;
                e--;
            } 
        }
        return true;       
    }
};