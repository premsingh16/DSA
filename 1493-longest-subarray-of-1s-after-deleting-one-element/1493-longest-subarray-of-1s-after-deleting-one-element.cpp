class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int zeroCnt = 0;
        int maxLen = 0;
        int left = 0;
        for(int right = 0; right<nums.size(); right++){
            if(nums[right] == 0) zeroCnt++;
            while(zeroCnt > 1){
                if(nums[left] == 0)zeroCnt--;
                left++;
            }
            maxLen = max(maxLen , right - left);
        }
        return maxLen;
    }
};