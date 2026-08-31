class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int minEl = INT_MAX;
        int maxEl = INT_MIN;
        int minIndex = -1;
        int maxIndex = -1;
        // Find min, max and their indices
        for (int i = 0; i < n; i++) {
            if (nums[i] < minEl) {
                minEl = nums[i];
                minIndex = i;
            }
            if (nums[i] > maxEl) {
                maxEl = nums[i];
                maxIndex = i;
            }
        }
        // Case 1: Both removed from the front
        int front = max(minIndex, maxIndex) + 1;

        // Case 2: Both removed from the back
        int back = n - min(minIndex, maxIndex);

        // Case 3: One from front, one from back
        int mixed = min(minIndex, maxIndex) + 1
                  + n - max(minIndex, maxIndex);

        return min({front, back, mixed});
    }
};