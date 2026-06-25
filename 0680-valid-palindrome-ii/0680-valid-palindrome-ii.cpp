class Solution {
public:
    bool isPalindrome(string &s, int l, int r){
        while(l<r){
            if(s[l] != s[r]) return false;
            else{
                l++;
                r--;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int n = s.size();
        int st = 0;
        int e = n-1;
        while(st<e){
            if(s[st] == s[e]){
                st++;
                e--;
            }
            else {
               return isPalindrome(s , st+1 , e) || 
                      isPalindrome(s , st , e-1);
            }

        }
       return true;
    }
};