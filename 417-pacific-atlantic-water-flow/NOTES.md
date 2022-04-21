{
for(int j=0;j<matrix[0].size();j++)
{
if(pacific[i][j]==1 && atlantic[i][j]==1)
{
vector<int>v(2);
v[0]=i;
v[1]=j;
ans.push_back(v);
}
}
}
return ans;
}
void fnc(vector<vector<int>>& matrix,int i, int j,int prev,vector<vector<int>>& ocean)
{
if(i<0 || j<0 || i>=matrix.size() || j>=matrix[0].size())
return;
if(ocean[i][j]==1)
return;
if(matrix[i][j]<prev)
return;
ocean[i][j]=1;
fnc(matrix,i+1,j,matrix[i][j],ocean);
fnc(matrix,i-1,j,matrix[i][j],ocean);
fnc(matrix,i,j+1,matrix[i][j],ocean);
fnc(matrix,i,j-1,matrix[i][j],ocean);
}