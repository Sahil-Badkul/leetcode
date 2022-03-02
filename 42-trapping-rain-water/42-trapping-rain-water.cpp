class Solution {
public:
    int trap(vector<int>& height) {
        // preprossing
        int n = size(height);
        vector<int> left(n), right(n);
        left[0] = height[0];
        right[n-1] = height[n-1];
        // assign value of left array
        for(int i = 1; i < n; i++){
            left[i] = max(left[i-1], height[i]);
        }
        // assigning value for right array
        for(int i = n - 2; i >= 0; i--){
            right[i] = max(right[i+1], height[i]);
        }
        // calculating ans 
        // water is trapped in place where current bar is lesser than left and right bar
        int ans = 0;
        for(int i = 0; i < n; i++){
            ans += min(left[i],right[i]) - height[i];
        }
        return ans;
    }
};