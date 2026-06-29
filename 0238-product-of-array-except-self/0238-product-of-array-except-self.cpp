class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        int leftMul = 1;
        for(int i = 0; i<n; i++){
            ans.push_back(leftMul);
            leftMul *= nums[i];
        }
        int rightMul = 1;
        for(int i = n-1; i>= 0; i--){
            ans[i] *= rightMul;
            rightMul  *= nums[i];
        }
        return ans;
    }
};