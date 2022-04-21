class Solution {
public:
    void dfs(vector<vector<int>> &height, vector<vector<int>> &ocean, int i, int j, int prev){
        if(i < 0 || j < 0 || i >= height.size() || j >= height[0].size())
            return;
        if(height[i][j] < prev)
            return;
        if(ocean[i][j] == 1) 
            return;
        ocean[i][j] = 1;
        dfs(height, ocean, i-1,j,height[i][j]);
        dfs(height, ocean, i+1,j,height[i][j]);
        dfs(height, ocean, i,j-1,height[i][j]);
        dfs(height, ocean, i,j+1,height[i][j]);
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        vector<vector<int>> ans;
        if(heights.size() < 1) 
            return ans;
        vector<vector<int>> pacific(heights.size(),vector<int> (heights[0].size(), 0));
        vector<vector<int>> atlantic(heights.size(),vector<int> (heights[0].size(), 0));
        
        for(int i = 0; i < heights[0].size(); i++){
            dfs(heights, pacific, 0, i, INT_MIN);
            dfs(heights, atlantic, heights.size()-1, i, INT_MIN);
        }
        
        for(int j = 0; j < heights.size(); j++){
            dfs(heights, pacific, j, 0, INT_MIN);
            dfs(heights, atlantic, j,heights[0].size()-1, INT_MIN);
        }
        
        for(int i = 0; i < heights.size(); i++){
            for(int j = 0; j < heights[0].size(); j++){
                if(pacific[i][j] == 1 && atlantic[i][j]== 1){
                    vector<int> v;
                    v.push_back(i);
                    v.push_back(j);
                    ans.push_back(v);
                }
            }
        }
        return ans;
    }
};