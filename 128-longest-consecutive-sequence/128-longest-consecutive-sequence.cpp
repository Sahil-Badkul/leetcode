class Solution {
public:
    
    int longestConsecutive(vector<int>& nums) {
        // BF-> sorting
        // Optimanl -> set
        // TC : O(N), SC : O(N)
        set<int> s;
        for(auto &num : nums){
            s.insert(num);
        }
        int maxLen = 0;
        for(auto &x : s){
            if(!s.count(x-1)){
                int currNum = x;
                int len = 1;
                while(s.count(currNum + 1)){
                    currNum += 1;
                    len += 1;
                }
                maxLen = max(maxLen, len);
            }
        }
        return maxLen;
    }
};