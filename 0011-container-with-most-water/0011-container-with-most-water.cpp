class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n-1;
        int ans = 0;
        while(left < right){
            int ht = min(height[left],height[right]);
            int width = right - left;
            int curr = width * ht;
            ans = max(ans , curr);
            if(height[left] < height[right]) left++;
            else right--;
        }
        return ans;  
    }
};