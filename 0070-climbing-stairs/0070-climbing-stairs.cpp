class Solution {
public:
    unordered_map<int,int> um;
    int climbStairs(int n) {
        if(um.find(n) != um.end())
            return um[n];
        if(n < 0)
            return 0;
        if(n == 0) 
            return 1;
        return um[n] = climbStairs(n-1) + climbStairs(n-2);
    }
};