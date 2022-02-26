class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // map to strore freq
        unordered_map<int,int> umap;
        int j = 0, n = nums.size();
        for(int i = 0; i < n; i++){
            umap[nums[i]]++;
            // if freq of nums[i] is lesser or equal to 2 then we repalce ele at jth index.
            if(umap[nums[i]] <= 2){
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};