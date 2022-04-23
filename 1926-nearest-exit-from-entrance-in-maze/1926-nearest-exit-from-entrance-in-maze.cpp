class Solution {
public:
    int m,n;
    int dx[4] = {0,0,1,-1};
    int dy[4] = {1,-1,0,0};
    bool isBorder(int i,int j){
        return (i==0 || i==m-1 || j == 0 || j == n-1);
    }
    
    bool valid(int r,int c){
        return (r>=0 && c>=0 && r<m && c<n);
    }
    
    int nearestExit(vector<vector<char>>& maze, vector<int>& ent) {
        m = maze.size() , n=maze[0].size();
        if(isBorder(ent[0] , ent[1]))  
            maze[ent[0]][ent[1]] = '+';
        int ans = 0;
        queue<pair<int,int>> q;
        q.push({ent[0],ent[1]});
        while(!q.empty()){
            int size = q.size();
            for(int i=0;i<size;i++){
                auto top = q.front();
                q.pop();
                int x = top.first , y = top.second;
                if(maze[x][y] != '+' && isBorder(x,y))
                    return ans;
                for(int j=0;j<4;j++){
                    int r = x + dx[j];
                    int c = y + dy[j];
                    if(valid(r,c) && maze[r][c]=='.'){
                        q.push({r,c});
                        maze[r][c] = '*';
                    }
                }
            }
            ans++;
        }
        return -1;
    }
};