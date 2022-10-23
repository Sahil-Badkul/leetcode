class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> freq(n+1, 0);
        for(auto &x : nums) freq[x]++;
        int rep, mis;
        for(int i = 1; i <= n; i++){
            if(freq[i] > 1) rep = i;
            else if(freq[i] == 0) mis = i;
        }
        return {rep, mis};
    }
};