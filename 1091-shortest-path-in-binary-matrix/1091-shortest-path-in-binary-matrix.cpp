class Solution {
public:
    // for storing pair in queue.
    struct point{
        int x;
        int y;
        int cnt;
    };
    // All coordinates where we can move simply make a x,y plane of 8 dir. in graph for better understanding.
    int dx[8] = {1,1,1,-1,-1,-1,0,0};
    int dy[8] = {1,0,-1,1,-1,0,1,-1};
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int row  = grid.size();
        int col = grid[0].size();
        // if start or end not have 0 then we cant reach there.
        if(row == 0 || col == 0) return -1;
        if(grid[0][0] == 1 || grid[row-1][col-1] == 1) return -1;
        queue<point> q;
        q.push({0,0,1});
        // marked visited with as -1
        grid[0][0] = -1;
        while(!q.empty()){
            point p = q.front();
            q.pop();
            // if it's end then return cnt;
            if(p.x == row-1 && p.y == col-1){
                return p.cnt;
            }
            for(int i = 0; i < 8; i++){
                // new coordinates.
                int x = p.x + dx[i];
                int y = p.y + dy[i];
                if(x >= 0 && y >= 0 && x < row && y < col && grid[x][y] == 0){
                    // increasing cnt and push it to queue.
                    q.push({x,y,p.cnt+1});
                    // marked visited.
                    grid[x][y] = -1;
                }
            }
        }
        return -1;
    }
};