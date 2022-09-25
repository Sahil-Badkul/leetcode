class Solution {
public:
    vector<string> topKFrequent(vector<string>& s, int k) {
        priority_queue<pair<int,string>> pq;
        map<string, int> mp;
        for(auto &word : s){
            mp[word]++;
        }
        for(auto &it : mp){
            if(pq.size() < k){
                pq.push({-1*it.second, it.first});
            }else if(-1*pq.top().first < it.second){
                pq.pop();
                pq.push({-1*it.second, it.first});
            }
        }
        vector<string> ans;
        while(!pq.empty()){
            ans.emplace_back(pq.top().second);
            pq.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};