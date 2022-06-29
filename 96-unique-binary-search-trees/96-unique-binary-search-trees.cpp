class Solution {
public:
    int numTrees(int n) {
        int catalen[n+1];
        catalen[0] = catalen[1] = 1;
        for(int i = 2; i <= n; i++){
            catalen[i] = 0;
            for(int j = 0; j < i; j++){
                catalen[i] += catalen[j]*catalen[i-j-1];
            }
        }
        return catalen[n];
    }
};