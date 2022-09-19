class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for(auto &x : nums) sum += x;
        int ind = -1;
        int curr = 0; 
        for(int i = 0; i < nums.size(); i++){
            int temp = sum - (curr + nums[i]);
            if(curr == temp) return i;
            curr += nums[i];
        }
        return ind;
    }
};