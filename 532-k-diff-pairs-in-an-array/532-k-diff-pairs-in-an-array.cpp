class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> um;
        for(auto &ele : nums){
            um[ele]++;
        }
        int cnt = 0;
        for(auto &kv : um){
            if(k == 0){
                if(kv.second > 1){
                    cnt++;
                }
            }else if(um.find(kv.first + k) != um.end()){
                cnt++;
            }
        }
        return cnt;
    }
};