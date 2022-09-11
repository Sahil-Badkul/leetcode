class Solution {
    public int lengthOfLongestSubstring(String s) {
        int freq[] = new int[256];
        Arrays.fill(freq, 0);
        int l = 0, r = 0, n = s.length();
        int ans = 0;
        while(r < n){
            freq[s.charAt(r)]++;
            while(freq[s.charAt(r)] > 1){
                freq[s.charAt(l)]--;
                l++;
            }
            int val = r - l + 1;
            if(val > ans) ans = val;
            r++;
        }
        return ans;
    }
}