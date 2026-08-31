class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int minEl = INT_MAX;
        int maxEl = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < minEl)
                minEl = nums[i];
        }

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > maxEl)
                maxEl = nums[i];
        }

        // From front
        int cnt = 0;
        int length = 0;
        for (int i = 0; i < n; i++) {
            length++;

            if (nums[i] == maxEl || nums[i] == minEl)
                cnt++;

            if (cnt == 2)
                break;
        }

        // From back
        int cnt2 = 0;
        int length2 = 0;
        for (int i = n - 1; i >= 0; i--) {
            length2++;

            if (nums[i] == maxEl || nums[i] == minEl)
                cnt2++;

            if (cnt2 == 2)
                break;
        }

        // One from front, one from back
        int len1 = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == maxEl || nums[i] == minEl)
                break;

            len1++;
        }

        int len2 = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (nums[i] == maxEl || nums[i] == minEl)
                break;

            len2++;
        }
        // +2 because the min/max elements themselves
        // also need to be deleted
        int length3 = len1 + len2 + 2;
        return min({length, length2, length3});
    }
};