class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        int lo = 0, hi = nums.size()-1;
        while(lo <= hi){
            int mid = lo + (hi - lo)/2;
            if(mid == 0 && nums[mid] > nums[mid+1]) return mid;
            else if(mid == nums.size()-1 && nums[mid] > nums[mid-1]) return mid;
            else if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]){
                return mid;
            }else if(nums[mid+1] > nums[mid]){
                lo = mid+1;
            }else{
                hi = mid;
            }
        }
        return -1;
    }
};