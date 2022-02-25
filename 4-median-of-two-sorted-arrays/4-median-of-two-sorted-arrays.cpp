class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> temp(n + m);
        int i = 0, j = 0, k = 0;
        while(i < n and j < m){
           if(nums1[i] <= nums2[j]){
               temp[k] = nums1[i];
               i++;
           }else{
               temp[k] = nums2[j];
               j++;
           }
           k++; 
        }
        while(i < n){
            temp[k] = nums1[i];
            i++;
            k++;
        }
        while(j < m){
            temp[k] = nums2[j];
            j++;
            k++;
        }
        int len = m + n;
        if( len % 2 == 0){
            return (double) (temp[len/2] + temp[len/2 - 1]) / 2.0;
        }
        return (double)temp[len/2];
    }
};