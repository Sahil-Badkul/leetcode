```
class Solution {
int x[4]={-1,0,1,0};
int y[4]={0,1,0,-1};
public:
vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
int m=matrix.size();
if(m==0) return {};
int n=matrix[0].size();
vector<vector<int> > dis(m,vector<int>(n,-1));
queue<pair<int,int> > que;
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
if(matrix[i][j]==0){
que.push({i,j});
dis[i][j]=0;
}
}
}
while(!que.empty()){
pair<int,int> point=que.front();
que.pop();
for(int dir=0;dir<4;dir++){
int xd=point.first+x[dir];
int yd=point.second+y[dir];
if(xd>=0 && yd>=0 && xd<=m-1 && yd<=n-1 && matrix[xd][yd]==1 && dis[xd][yd]==-1){
dis[xd][yd]=dis[point.first][point.second]+1;
que.push({xd,yd});
}
}
}
return dis;
}
};
```