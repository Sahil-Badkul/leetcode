class Solution {
public:
    bool isValid(vector<int> &arr){
        int n = arr.size();
        for(int i = 1; i < n-1; i++){
            int fs = arr[i]  - arr[i-1];
            int sn = arr[i+1] - arr[i];
            if(fs != sn) return false;
        }
        return true;
    }
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        int result = 0;
        for(int i = 0; i < n; i++){
            vector<int> temp;
            for(int j = i; j < n; j++){
                temp.push_back(nums[j]);
                if(temp.size() > 2){
                    if(isValid(temp)) result++;
                }
            }
        }
        return result;
    }
};