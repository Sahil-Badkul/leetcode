#define ll long long
 
class Solution {
public:
 
    int target;
    vector<vector<int>> cost;
    vector<int> houses;
    int n, m;
 
    long long dp[109][109][39];
 
    long long solve(int idx, int nums, int prev) {
 
        if(nums > target)
            return INT_MAX;
 
        if(idx == m){
            return nums == target ? 0 : INT_MAX;
        }
 
        if(dp[idx][nums][prev] != -1)
            return dp[idx][nums][prev];
 
        ll ans = INT_MAX;
        int new_num = nums;
 
        if(houses[idx] != 0) {
            new_num = nums;
            if(prev != houses[idx]) new_num = nums + 1;
            ans = min(ans, solve(idx + 1, new_num, houses[idx]));    
        } else {
            for(int i = 1; i <= n; i++) {
                new_num = nums;
                if(prev != i) new_num = nums + 1;
                ans = min(ans, solve(idx + 1, new_num, i) + cost[idx][i-1]);
            }
        }
 
        return dp[idx][nums][prev] = ans;
 
    }
 
 
    int minCost(vector<int>& houses, vector<vector<int>>& cost, int m, int n, int target) {
        this->houses = houses;
        this->cost = cost;
        this->target = target;
        this->n = n; this->m = m;
        memset(dp, -1, sizeof(dp));
        ll ans = solve(0, 0, 29);
        return ans == INT_MAX ? -1 : ans;
    }
};