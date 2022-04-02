class Solution {
public:
    /*
    // Naive approach : TLE error
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0, cnt = 0;
        for(int i = 0; i < n; i++){
            sum = 0;
            for(int j = i; j < n; j++){
                sum += nums[j];
                if(sum == k) cnt++;
            }
        }
        return cnt;
    }
    */
    // Better approach
     int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> umap;
         int sum = 0, cnt = 0;
         umap[0] = 1;
         for(int i = 0; i < nums.size(); i++){
             sum += nums[i];
             if(umap.find(sum-k) != umap.end()){
                 cnt += umap[sum-k];
             }
             umap[sum]++;
         }
         return cnt;
    }
};