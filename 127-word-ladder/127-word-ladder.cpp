class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> list(wordList.begin(), wordList.end()); // to make search in O(1);
        queue<pair<string,int>> q;
        q.push({beginWord,1});
        while(!q.empty()){
            string str = q.front().first;
            int ladder = q.front().second;
            q.pop();
            if(str == endWord){
                return ladder;
            }
            list.erase(str);
            for(int i = 0; i < str.size(); i++){
                char c = str[i];
                for(int k = 0; k < 26; k++){
                    str[i] = 'a' + k;
                    if(list.find(str) != list.end()){
                        q.push({str, ladder+1});
                    }
                }
                str[i] = c;
            }
        }
        return 0;
    }
};