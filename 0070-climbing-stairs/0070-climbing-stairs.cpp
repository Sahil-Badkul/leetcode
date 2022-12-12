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
        int one = 0;
        if(um.find(n-1) != um.end())
            one = um[n-1];
        else
            one = climbStairs(n-1);
        int two = 0;
        if(um.find(n-2) != um.end())
            two = um[n-2];
        else
            two = climbStairs(n-2);
        return um[n] = one + two;
    }
};