class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char,char>mpp1;
        unordered_map<char,char>mpp2;
        for(int i = 0; i<s.size(); i++){
            char a = s[i];
            char b = t[i];
            if(mpp1.find(a)!= mpp1.end() && mpp1[a] != b) return false;
            if(mpp2.find(b)!= mpp2.end() && mpp2[b] != a) return false;
            mpp1[a] = b;
            mpp2[b] = a;
        }
        return true;
    }
};