class Solution {
public:
    int maxArea(vector<int>& height) {
        // int ans = 0;
        // int n = height.size();
        // // Brute force approach
        // for(int i = 0; i < n; i++){
        //     for(int  j = i + 1; j < n; j++){
        //         int area = (j - i) * min(height[i],height[j]);
        //         ans = max(ans, area);
        //     }
        // }
        // return ans;
        
        // Two pointer approach
        int ans = 0;
        int n = size(height);
        int l = 0, r = n - 1;
        while(l < r){
            int area = (r-l) * min(height[r],height[l]);
            ans = max(ans, area);
            if(height[r] > height[l]){
                l++;
            }else{
                r--;
            }
        }
        return ans;
    }
};