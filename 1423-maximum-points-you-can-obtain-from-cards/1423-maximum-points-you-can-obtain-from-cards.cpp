class Solution {
public:
    int maxScore(vector<int>& cards, int k) {
        int sum = 0, maxi = 0, n = cards.size();
        for(int i = 0; i < k; i++){
            sum += cards[i];
        }
        maxi = sum;
        for(int i = k-1; i >= 0; i--){
            sum -= cards[i];
            sum += cards[n - k + i];
            maxi = max(maxi, sum);
        }
        return maxi;
    }
};