class Solution {
public:
    int countOrders(int n) {
        long ans = 1;
        int M = 1e9+7;
        for(int i = 1; i <= 2*n; i++){
            ans = ans * i;
            if(i % 2 == 0){
                ans = ans >> 1;
            }
            ans %= M;
        }
        return ans;
    }
};