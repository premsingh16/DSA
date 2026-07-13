class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        // this is also a way of doing .. see neeche 
        unordered_map<char,int>mpp;
        for(char ch: magazine){
            mpp[ch]++;
        }
       for(char ch :ransomNote){
           if(mpp[ch] > 0) mpp[ch]--;
            else return false;
       }
        return true;
    }
};