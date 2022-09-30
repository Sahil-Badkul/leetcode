class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>m;
	    int ans = 0, sum = 0;
	    int n = nums.size();
        if(n == 0) return 0;
	    m[0] = 1;
	    for(int i=0;i<n;i++)
	    {
	        sum+=nums[i];  
	        int rem = sum%k; 
	        if(rem<0)rem+=k;
	        if(m.find(rem)!=m.end()){
	            ans += m[rem];
            }
            m[rem]++;
	    }
	    
	    return ans;
    }
};

 
