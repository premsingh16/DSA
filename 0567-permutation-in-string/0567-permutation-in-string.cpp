class Solution {
public:
    bool allZero(vector<int>&counter){
        for(int i = 0; i< counter.size(); i++){
            if(counter[i]!= 0) return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int n = s2.size();
        vector<int>counter(26 , 0);
        for(int i = 0; i<s1.size(); i++){
            char ch = s1[i];
            counter[ch-'a']++;
        }
        
        int k = s1.size();
        int left = 0;
        for(int right = 0; right < n; right++){
            counter[s2[right] -'a']--;
            if(right - left + 1 == k){
                if(allZero(counter)){
                    return true;
                }
                counter[s2[left] -'a']++;
                left++;
            }
        }
        return false;
    }
};