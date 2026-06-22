class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int left = 0;
        if(n == 0) return 0;
        unordered_set<int>st;
        int maxLength = INT_MIN;
        for(int right = 0; right < n; right++){
            int a = s[right];
            if(st.find(a) != st.end()){
                while(left < right && st.find(a) != st.end()){
                    st.erase(s[left]); 
                    left++;
                }
            }
            st.insert(a);
            maxLength = max(maxLength , right - left + 1);
        }
        return maxLength;
    }
};