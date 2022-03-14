class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // int lastPos = m + n -1;
        int lastPos = nums1.size()-1; // bcaz initialy it contain extra 0's
        m--;    // bcaz index start from 0
        n--;
        while(n >= 0){
            if(m >= 0 and nums1[m] > nums2[n]){
                nums1[lastPos--] = nums1[m--];
            }else{
                nums1[lastPos--] = nums2[n--];
            }
        }
    }
};