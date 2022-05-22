class Solution {
public:
    int climbStairs(int n) {
        // space optimization
        if(n <= 0) return 0;
        if(n == 1) return 1;
        if(n == 2) return 2;
        int oneBack = 2;
        int twoBack = 1;
        int allstep;
        for(int i = 3; i <= n; i++){
            allstep = oneBack + twoBack;
            twoBack = oneBack;
            oneBack = allstep;
        }
        return oneBack;
    }
};