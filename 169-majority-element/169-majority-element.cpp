class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele = 0;
        int cnt = 0;
        for(auto &val : nums){
            if(cnt == 0){
                ele = val;
            }
            if(ele == val){
                cnt++;
            }else{
                cnt--;
            }
        }
        return ele;
    }
};