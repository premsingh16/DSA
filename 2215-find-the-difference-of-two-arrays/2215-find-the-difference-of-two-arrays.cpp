class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>st1(nums1.begin(), nums1.end());
        unordered_set<int>st2(nums2.begin(), nums2.end());
        vector<int>ans1;
        vector<int>ans2;
        vector<vector<int>>result;
        for(auto it : st1){
            if(st2.find(it) == st2.end()) ans1.push_back(it);
        }
        for(auto it : st2){
            if(st1.find(it) == st1.end()) ans2.push_back(it);
        }
        result.push_back(ans1);
        result.push_back(ans2);

        return result;
    }
};