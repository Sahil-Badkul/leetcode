class Solution {
public:
    bool canJump(vector<int>& nums) {
        int reachable = 0;
        for(int i = 0; i < nums.size(); i++){
            // if reachable become less in some point then we return false.
            if(reachable < i){
                return false;
            }
            reachable = max(reachable, i + nums[i]);
        }
        return true;
    }
};
/*
2 3 1 1 4 
n = 5
reachable = 0 2 4
i = 0, 1, 2, 3, 4
*/