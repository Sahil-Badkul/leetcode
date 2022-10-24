class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int xorr = 0, n = nums.size(), x = 0, y = 0;
        for(int i = 1; i <= n; i++) xorr ^= i;
        for(auto &ele : nums) xorr ^= ele;
        int rightMostSet = xorr & ~(xorr-1);
        for(int i = 1; i <= n; i++){
            if(i & rightMostSet){
                x ^= i;
            }else{
                y ^= i;
            }
        }
        for(auto &i : nums){
            if(i & rightMostSet){
                x ^= i;
            }else{
                y ^= i;
            }
        }
        int cnt = 0; 
        for(auto &i : nums) if(i == x) cnt++;
        if(cnt) return {x, y};
        return {y, x};
    }
};