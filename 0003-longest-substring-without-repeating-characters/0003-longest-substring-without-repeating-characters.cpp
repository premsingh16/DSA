class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if(n == 0) return 0;
        unordered_set<char>st;
        int maxLen = INT_MIN;
        int left = 0;
        for(int right = 0; right < n; right++){
            char a = s[right];
            while(left < right && st.find(a) != st.end()){
                st.erase(s[left]);
                left++;
            }
            st.insert(a);
            maxLen = max(maxLen , right - left + 1);
        }
        return maxLen;
    }
};