class Solution {
private:
    bool isCommonPrefix(vector<string> &strs, int len){
        string str1 = strs[0].substr(0, len);
        for(int i = 1; i < strs.size(); i++){
            string temp = strs[i].substr(0,len);
            if(temp != str1) return false;
        }
        return true;
    }
public:
    string longestCommonPrefix(vector<string>& strs) {
        int maxLen = 0;
        for(auto &s : strs){
            maxLen = maxLen < s.size() ? s.size() : maxLen;
        }
        int low = 0;
        int high = maxLen;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(isCommonPrefix(strs, mid)){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return strs[0].substr(0, (low+high)/2);
    }
};