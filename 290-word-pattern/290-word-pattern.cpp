class Solution {
public:
   bool wordPattern(string pattern, string s) {
        unordered_map<char,string> mp;
        stringstream data(s);
        string str;
        vector<string> temp;
        set<char> pSet;
        set<string> sSet;
        while(getline(data, str, ' ')){
            temp.push_back(str);
            sSet.insert(str);
        }
       // Case 1 : if pattern and word size are not equal.
       int n = pattern.size(), m = temp.size();
       if(n != m) return false;
       for(auto &c : pattern) pSet.insert(c);
       // Case 2 : if unique char in pattern are not equal to distinct word in temp.
       if(pSet.size() != sSet.size()) return false;
       
       for(int i = 0; i < n; i++){
           string word = temp[i];
           // Case 3 : if map alredy have a value.
           if(mp.find(pattern[i]) != mp.end()){
               // Case 4 : and that value is not equal
               if(word == mp[pattern[i]]) continue;
               return  false;
           }
           mp[pattern[i]] = word;
       }
       return true;
    }
};