class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        unordered_set<string> dead(deadends.begin(), deadends.end());
        unordered_set<string> visited;
        queue<pair<string, int>> q;
        string temp1, temp2;
        if(dead.find("0000") == dead.end()){
            q.push({"0000",0});
            visited.insert("0000");
        }
        while(!q.empty()){
            string curr = q.front().first;
            int count = q.front().second;
            q.pop();
            if(curr == target){
                return count;
            }
            for(int i = 0; i < 4; i++){
                temp1 = curr.substr(0,i) + to_string((curr[i] - '0' + 1) % 10) + curr.substr(i+1);
                temp2 = curr.substr(0,i) + to_string((curr[i] - '0' - 1 + 10) % 10) + curr.substr(i+1);
                if(dead.find(temp1) == dead.end() && visited.find(temp1) == visited.end()){
                    q.push({temp1, count+1});
                    visited.insert(temp1);
                }
                if(dead.find(temp2) == dead.end() && visited.find(temp2) == visited.end()){
                    q.push({temp2, count+1});
                    visited.insert(temp2);
                }
            }
        }
        return -1;
    }
};