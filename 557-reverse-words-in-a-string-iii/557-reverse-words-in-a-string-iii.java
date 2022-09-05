class Solution {
    public String reverseWords(String s) {
        char s1[] = s.toCharArray();
        int i = 0;
        for(int j = 0; j < s1.length; j++){
            if(s1[j] == ' '){
                reverse(s1, i, j-1);
                i = j+1;
            }
        }
        reverse(s1,i, s1.length-1);
        return new String(s1);
    }
    static void reverse(char s1[], int l, int r){
        while(l < r){
            char c = s1[l];
            s1[l] = s1[r];
            s1[r] = c;
            l++;
            r--;
        }
    }
}