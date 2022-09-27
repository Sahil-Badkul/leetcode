class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size();
        while(low < high){
            int mid = low + (high-low)/2;
            int num = target < nums[0] == nums[mid] < nums[0] ? nums[mid] : target < nums[0] ? -1e9 : 1e9;
            if(num < target){
                low = mid+1;
            }else if(num > target){
                high = mid;
            }else{
                return mid;
            }
        }
        return -1;
    }
};