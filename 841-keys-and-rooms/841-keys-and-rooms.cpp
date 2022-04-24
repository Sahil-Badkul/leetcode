class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool> visited(rooms.size(), false);
        queue<int> q;
        int N = rooms[0].size();
        visited[0] = true;
        for(int i = 0; i < N; i++){
            q.push(rooms[0][i]);
        }
        while(!q.empty()){
            int x = q.front();
            q.pop();
            if(!visited[x]){
                N = rooms[x].size();
                visited[x] = true;
                for(int i = 0; i < N; i++){
                    if(!visited[rooms[x][i]]){
                        q.push(rooms[x][i]);
                    }
                }
            }
        }
        for(int i=0;i<visited.size();i++){
            if(!visited[i]) return false;
        }
        return true;
    }
};