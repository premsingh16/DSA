class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>set1(nums1.begin(), nums1.end());
        unordered_set<int>set2(nums2.begin(), nums2.end());
        vector<int>ans1;
        vector<int>ans2;
        vector<vector<int>>result;
        for(auto it: set1){
            if(set2.find(it) == set2.end()){
                ans1.push_back(it);
            }
        }
        result.push_back(ans1);
        for(auto it: set2){
            if(set1.find(it) == set1.end()){
                ans2.push_back(it);
            }
        }
        result.push_back(ans2);
        return result;
    }
};