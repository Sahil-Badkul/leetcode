class Solution {
    public boolean isSubsequence(String s, String t) {
        
        int count = 0;
        int j = 0;
        
        if(s.length() == 0){
            return true;
        }
        if( t.length() == 0){
            return false;
        }

        for(int i=0; i<t.length(); i++){
           char z = t.charAt(i);
           char x = s.charAt(j);
            if(x == z){
                j++;
                count++;
            }
             if(count == s.length()){
                return true;
            }
        }
        
        if(count == s.length()){
            return true;
        }
        
        return false;
    }
}