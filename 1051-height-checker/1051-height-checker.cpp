class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();
        vector<int>ans(n);
        for(int i = 0; i<heights.size(); i++){
            ans[i] = heights[i];
        }
        sort(ans.begin(), ans.end());
        int cnt = 0;
        for(int i = 0; i<heights.size(); i++){
            if(ans[i] != heights[i]) cnt++;
        }
        return cnt;
    }
};