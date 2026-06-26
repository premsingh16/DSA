class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
        int el1 = 0 , cnt1 = 0;
        int el2 = 0 , cnt2 = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == el1) cnt1++;
            else if(nums[i] == el2) cnt2++;
            else if(cnt1 == 0){
                el1 = nums[i];
                cnt1 = 1;
            }
            else if(cnt2 == 0){
                el2 = nums[i];
                cnt2 = 1;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        // giving them 0 to use again
        cnt1 = 0;
        cnt2 = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == el1) cnt1++;
            else if(nums[i] == el2) cnt2++;
        }
        if(cnt1 > n/3) ans.push_back(el1); 
        if(cnt2 > n/3) ans.push_back(el2);
        return ans;    
    }
};