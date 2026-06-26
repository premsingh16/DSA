class Solution {
public:
     static bool cmp(pair<int,int> a, pair<int,int> b){
        return a.second > b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        for(auto x : nums) freq[x]++;
        vector<pair<int,int>>p;
        for(auto it : freq){
            p.push_back(it);
        }
        sort(p.begin(), p.end(), cmp);

        vector<int>ans;
        for(int i = 0; i<k; i++){
            ans.push_back(p[i].first);
        }
        return ans; 
    }
};