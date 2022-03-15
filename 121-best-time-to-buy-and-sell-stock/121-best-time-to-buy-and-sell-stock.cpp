class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> arr(n);
        arr[n-1] = prices[n-1];
        for(int i = n-2; i >= 0; i--){
            arr[i] = max(prices[i], arr[i+1]);
        }
        int ans = INT_MIN;
        for(int i = 0; i < n; i++){
            ans = max(ans, arr[i]-prices[i]);
        }
        return ans;
    }
};