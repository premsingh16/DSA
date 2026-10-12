class Solution {
public:
    bool allZero(vector<int>&counter){
        for(int i = 0; i< counter.size(); i++){
            if(counter[i]!= 0) return false;
        }
        return true;
    }
    vector<int> findAnagrams(string txt, string pat) {
        int n = txt.size();
        vector<int>counter(26 , 0);
        for(int i = 0; i<pat.size(); i++){
            char ch = pat[i];
            counter[ch-'a']++;
        }
        
        vector<int>ans;
        int k = pat.size();
        int left = 0;
        for(int right = 0; right < n; right++){
            counter[txt[right] -'a']--;
            if(right - left + 1 == k){
                if(allZero(counter)){
                    ans.push_back(left);
                }
                counter[txt[left] -'a']++;
                left++;
            }
        }
        return ans;
    }
};