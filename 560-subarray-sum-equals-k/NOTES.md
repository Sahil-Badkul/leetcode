class Solution {
public:
int subarraySum(vector<int>& nums, int k) {
unordered_map<int,int> umap;
int n = nums.size();
int cnt = 0, sum = 0;
umap[0] = 1;
for(int i = 0; i < n; i++){
sum += nums[i];
if(umap.find(sum - k) != umap.end()){
cnt += umap[sum - k];
}
umap[sum]++;
}
return cnt;
}
};