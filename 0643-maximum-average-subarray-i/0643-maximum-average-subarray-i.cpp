class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int windowSum = 0;
        for(int i = 0; i<k; i++)  windowSum += nums[i];
        int ans =  windowSum;
        
        for(int i = k; i<n; i++){
            windowSum += nums[i];
            windowSum -= nums[i-k];
            ans = max(ans , windowSum);
        }
        return (double)ans/(double)k;  
    }
};