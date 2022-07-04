class Solution {
public:
    int candy(vector<int>& ratings) {
        // B.F --> TC : O(n^2), SC : O(n)
        // Two array --> TC : O(n), SC : O(2n)
        // Single array --> TC : O(n), SC : O(n)
        int n = ratings.size();       
        // vector<int> candyLR(n, 1);
        vector<int> candyRL(n, 1);
        for(int i = n-2; i >= 0;i--){
            if(ratings[i] > ratings[i+1]){
                candyRL[i] = candyRL[i+1] + 1;
            }                 
        }
        // for(int i = 1; i < n ;i++){
        //     if(ratings[i] > ratings[i-1]){
        //         candyLR[i] = candyLR[i-1] + 1;
        //     }                 
        // }
        int sum = candyRL[0];
        for(int i = 1; i < n; i++){
            // sum += max(candyLR[i], candyRL[i]);
            if(ratings[i] > ratings[i-1]){
                candyRL[i] = max(candyRL[i-1] + 1, candyRL[i]);
            } 
            sum += candyRL[i];
        }
        return sum;
    }
};