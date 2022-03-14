class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        int k = high;
        vector<int> v(k+1);
        while(low <= high){
            if(abs(nums[low]) > abs(nums[high])){
                v[k] = nums[low]*nums[low];
                k--;
                low++;
            }else{
                v[k] = nums[high]*nums[high];
                high--;
                k--;
            }
        }
        return v;
    }
};