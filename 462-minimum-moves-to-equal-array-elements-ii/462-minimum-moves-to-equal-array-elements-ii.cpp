class Solution {
public:
    int countMove(vector<int> &nums, int mid){
        int cnt = 0;
        for(int i = 0; i < nums.size(); i++){
            cnt += abs(nums[mid] - nums[i]);
        }
        return cnt;
    }
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int mid = n/2;
        return countMove(nums, mid);
    }
};