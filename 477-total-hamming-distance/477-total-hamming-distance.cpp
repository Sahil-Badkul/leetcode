class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int i = 0; i < 32; i++){
            int oneCnt = 0, zeroCnt = 0;
            int k = (1 << i);
            for(int j = 0; j < n; j++){
                if(nums[j] & k){
                    oneCnt++;
                }
                if((nums[j] & k) == 0){
                    zeroCnt++;
                }
            }
            if(oneCnt == n or zeroCnt == n){
                continue;
            }
            ans += oneCnt * zeroCnt;
        }
        return ans;
    }
};