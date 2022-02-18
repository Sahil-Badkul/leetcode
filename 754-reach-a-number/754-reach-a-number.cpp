class Solution {
public:
    int reachNumber(int target) {
        target=abs(target);
        int ans=0;
        int sum=0;
        while(sum<target || (sum-target)%2!=0){ 
            ans++;
            sum+=ans;
        }
        return ans;
    }
};