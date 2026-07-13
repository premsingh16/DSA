class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        // this is also a way of doing .. see neeche 
        unordered_map<char,int>mpp;
        for(char ch: magazine){
            mpp[ch]++;
        }

       for(char ch :ransomNote){
            auto it = mpp.find(ch);
            if( it != mpp.end() && it->second > 0){
                it->second--;
            }
            else return false;
       }
        return true;
    }
};