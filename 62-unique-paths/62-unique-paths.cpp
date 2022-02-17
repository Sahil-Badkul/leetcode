class Solution {
public:
    int uniquePaths(int m, int n) {
        // Total number of possible moves. means m-1 in down and n-1 in right.
        int N = m + n -2;
        int r = m - 1;
        double res = 1;
        // Here our probelm breaks into permutation so we simply find permutaion.
        for(int i = 1; i <= r; i++){
            res = res * (N - r + i) / i;
        }
        return int(res);
    }
};