class Solution {
private:
    void bfs(int row, int col,int initColor , int color ,vector<vector<int>>&ans, vector<vector<int>>&image,int delRow[], int delCol[]){
        ans[row][col] = color;
        int n = image.size();
        int m = image[0].size();
        queue<pair<int,int>>q;
        q.push({row ,col});
        while(!q.empty()){
            int currRow = q.front().first;
            int currCol = q.front().second;
            q.pop();
            // Check 4 neighbours
            for(int i =0; i<4; i++){
                int nrow = currRow + delRow[i];
                int ncol = currCol + delCol[i];
                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m 
                && image[nrow][ncol] == initColor && ans[nrow][ncol] != color){
                    ans[nrow][ncol] = color;
                    q.push({nrow , ncol});
                }
            }
        }
    }


public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int initColor = image[sr][sc];
        if(initColor == color)
            return image;
        vector<vector<int>> ans = image;
        int delRow[] = {-1 , 0, +1 ,0};
        int delCol[] = {0, +1, 0 , -1} ;
        bfs(sr , sc ,initColor, color , ans , image, delRow , delCol);
        return ans;
    }
};