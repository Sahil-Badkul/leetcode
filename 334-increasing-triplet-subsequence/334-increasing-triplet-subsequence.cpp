class Solution {
public:
    /*
    // better approach
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        vector<int> maxRight(n);
        maxRight[n-1] = -1;
        for(int i = n-2; i >= 0; i--){
            maxRight[i] = max(maxRight[i+1], nums[i+1]);
        }
        set<int> st;
        st.insert(nums[0]);
        for(int i = 1;i < n; i++){
            st.insert(nums[i]);
            auto it = st.find(nums[i]);
            if(it == st.begin()) continue;
            it--;
            if(maxRight[i] > nums[i]) return true;
        }
        return false;
    }
    */
    //Best approach
    bool increasingTriplet(vector<int>& nums){
        int one = INT_MAX, two = INT_MAX;
        for(auto& num : nums){
            if(num < one){
                one = num;
            }else if(one < num && num < two){
                two = num;
            }else if(one < num && two < num){
                return true;
            }
        }
        return false;
    }
};