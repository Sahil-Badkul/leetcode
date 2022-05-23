class Solution {
public:
bool canJump(vector<int>& nums) {
return solve(0,nums);
}
bool solve(int i,vector<int> nums){
if(i==nums.size()-1) return true;
int reachable=i+nums[i];
for(int k=i+1;k<=reachable;k++){
if(solve(k,nums)){
return true;
}
}
return false;
}
};