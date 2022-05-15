class Solution {
public:
vector<bool> checkIfPrerequisite(int n, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
vector<vector<bool>>  reachable(n,vector<bool>(n,0));
for(auto &p : prerequisites)
reachable[p[0]][p[1]] = 1;
vector<bool> result;
for(int k=0;k<n;k++){
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
reachable[i][j] = reachable[i][j] || (reachable[i][k] && reachable[k][j]);
//if i is a direct prerequisite of j or i is a prerequisite of k which is a prerequisite of j
}
}
}
for(auto &q : queries)
result.push_back(reachable[q[0]][q[1]]);
return result;
}
};