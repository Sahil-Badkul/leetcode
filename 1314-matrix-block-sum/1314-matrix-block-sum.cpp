class Solution {
public:
	vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
		   int r=mat.size(),c=mat[0].size();
		   vector<vector<int>> dp(r,vector<int>(c,0));

		 //filling dp matrix
		 for(int i=0;i<r;i++){
			 for(int j=0;j<c;j++){
				  if(i==0 or j==0){
					   if(i==0 && j==0) dp[i][j]=mat[i][j];
					   else if(i==0) dp[i][j]=mat[i][j]+dp[i][j-1];
					   else if(j==0) dp[i][j]=mat[i][j]+dp[i-1][j];
				  }
				  else{
					 dp[i][j]=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1]+mat[i][j];
				  }
			 }
		 }
		 vector<vector<int>> ans(r, vector<int>(c));
		//computing answer
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
			   int rmax=min(r-1,i+k);
			   int rmin=max(0,i-k);
			   int cmax=min(c-1,j+k);
			   int cmin=max(0,j-k);

			   if(rmin==0 && cmin==0) ans[i][j]=dp[rmax][cmax];
			   else if(rmin==0) ans[i][j]=dp[rmax][cmax]-dp[rmax][cmin-1];
			   else if(cmin==0) ans[i][j]=dp[rmax][cmax]-dp[rmin-1][cmax];
			   else ans[i][j]=dp[rmax][cmax]-dp[rmax][cmin-1]-dp[rmin-1][cmax]
							  +dp[rmin-1][cmin-1];
			} 
		}

		return ans;
	}
};