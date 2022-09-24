class Solution {
public:
    string minWindow(string str, string t) {
        unordered_map<char, int> mp;
        for(auto &ch : t) mp[ch]++;
        int count = mp.size();
        int i = 0, j = 0, n = str.size(), mini = 1e9;
        string ans = "", temp = "";
        while(i <= j && j < n){
            if(mp.find(str[j]) != mp.end()){
                mp[str[j]]--;
                if(mp[str[j]] == 0) count--;
            }
            if(count == 0){
                while(i <= j && count != 1){
                    if(mp.find(str[i]) != mp.end()){
                        mp[str[i]]++;
                        if(mp[str[i]] > 0){ 
                            count++;
                            if(mini > j-i+1){
                                mini = j-i+1;
                                ans = str.substr(i, j-i+1);
                            }
                        }
                    }
                    i++;
                }
            }
            j++;
        }
        // cout<<mini<<endl;
        return ans;
    }
};