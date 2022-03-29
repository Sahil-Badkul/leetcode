class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for(int i=0;i<n;i++){
            int st = i+1;
            int en = n-1;
            while(st < en){
                int sum = nums[i] + nums[st] + nums[en];
                if(sum > 0){
                    en--;
                }else if(sum < 0){
                    st++;
                }else{
                    vector<int> temp = {nums[i], nums[st], nums[en]};
                    res.push_back(temp);
                    while(st < en && nums[st] == temp[1]) st++;
                    while(st < en && nums[en] == temp[2]) en--;
                }
            }
            while(i+1 < n && nums[i+1] == nums[i]) i++;
        }
        return res;
    }
};