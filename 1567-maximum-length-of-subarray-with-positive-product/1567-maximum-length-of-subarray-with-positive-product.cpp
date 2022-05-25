class Solution {
public:
    int getMaxLen(vector<int>& nums) {
          // llp = Length of the longest positive subarray
        int llp = 0;
        // lln = length of the longest negative subarray
        int lln = 0;
        // max length of the positive subarray
        int maxi = 0;
        for (int i = 0; i < nums.size(); i++) {
            // Reset the lengths upon encountering a zero
            if (nums[i] == 0) {
                llp = lln = 0;
            } else if (nums[i] > 0) {
                // Upon encountering a positive value, increase the length of the positive subarray till now by one
                llp++;
                // Increase the length of the negative subarray only if there's a negative product. 
                // If there are no negative numbers before the current number or if the (i-1)th number is zero, we should not increase this value.
                if (lln > 0) lln++;
            } else {
                // Upon encountering a negative value, the lengths of the positive and negative subarrays need to be swapped.
                int temp = llp;
                // If there are no negative numbers before the current number, then llp should be zero. 
                // so we need an extra check to ensure that
                llp = (lln > 0 ? lln + 1 : 0);
                lln = temp + 1;
            }
            maxi = max(maxi, llp);
        }
        return maxi;
    }  
};