class Solution {
public:
    const int mod = 1e9+7;
    long long pow(int xx, int n){
        long long x = xx;
        long long  ans = 1;
        while(n > 0){
            if(n % 2 == 0){
                x *= x;
                x %= mod;
                n /= 2;
            }else{
                ans *= x;
                ans %= mod;
                n--;
            }
        }
        return ans%mod;
    }
    int numSubseq(vector<int>& nums, int target) {
        long long cnt = 0;
        sort(nums.begin(), nums.end());
        int st = 0, en = nums.size()-1;
        while(st <= en){
            if(nums[st] + nums[en] <= target){
                cnt += pow(2, en-st);
                cnt %= mod;
                st++;
            }else{
                en--;
            }
        }
        return (int)cnt%mod;
    }
};