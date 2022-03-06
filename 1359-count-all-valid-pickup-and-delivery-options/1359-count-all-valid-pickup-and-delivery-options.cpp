class Solution {
public:
    int countOrders(int n) {
        // factoria * (2n-1);
        long long res = 1;
        int M = 1e9+7;
        for(int i = 2; i <= n; i++){
            res = (res*i) % M;
        }
        for(int i = 1; i <= 2*n; i+=2){
            res = (res*i) % M;
        }
        return (int) res%M;
    }
    
};