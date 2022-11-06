class Solution {
public:
    string orderlyQueue(string s, int k) {
        if(k == 1){
            string ans = s;
            for(int i = 0; i < s.size(); i++){
                string temp = s.substr(i) + s.substr(0, i);
                if(temp.compare(ans) < 1){
                    ans = temp;
                }
            }
            return ans;
        }else{
            sort(s.begin(), s.end());
            return s;
        }
    }
};