class Solution {
public:
     int longestConsecutive(vector<int>& nums) {
         // using set 
         // TC : O(n) , SC : O(n)
        set<int> hashSet;
        for(auto &ele : nums){
            hashSet.insert(ele);
        }
        int maxi = 0;
        
        for(auto &num : hashSet){
            if(!hashSet.count(num-1)){
                int curr = num;
                int currStreak = 1;
                while(hashSet.count(curr+1)){
                    curr += 1;
                    currStreak += 1;
                }
                maxi = max(maxi, currStreak);
            }
        }
        return maxi;
    }
};