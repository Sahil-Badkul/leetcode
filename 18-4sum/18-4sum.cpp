typedef long long ll;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        // using sort + two pointer
        // TC : O(NlogN + N^3logN)
        // SC : O(N*4)
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i = 0; i < n; i++){
            ll tar1 = target - nums[i];
            for(int j = i+1; j < n; j++){
                ll tar2 = tar1 - nums[j];
                // two pointer
                int left = j+1, right = n-1;
                while(left < right){
                    ll sum = nums[left] + nums[right];
                    if(tar2 < sum){
                        right--;
                    }else if(tar2 > sum){
                        left++;
                    }else{
                        vector<int> temp(4);
                        temp[0] = nums[i];
                        temp[1] = nums[j];
                        temp[2] = nums[left];
                        temp[3] = nums[right];
                        ans.push_back(temp);
                        while(left < right && nums[left] == temp[2]) left++;
                        while(left < right && nums[right] == temp[3]) right--;
                    }
                }
                while(j+1 < n && nums[j+1] == nums[j]) j++;
            }
            while(i+1 < n && nums[i+1] == nums[i]) i++;
        }
        return ans;
    }
};