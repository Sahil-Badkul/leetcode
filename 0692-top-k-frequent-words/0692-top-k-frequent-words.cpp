class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> mp;
        for(auto &word : words) mp[word]++;
        priority_queue<pair<int, string>, vector<pair<int, string>>, MyComp> pq;
        for(auto it : mp){
            pq.push({it.second, it.first});
        }
        vector<string> res;
        while(!pq.empty() && k--){
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
private:
    struct MyComp {
        bool operator() (const pair<int, string>& a, const pair<int, string>& b) {
            if(a.first == b.first) {
                return a.second > b.second;
            }
            else {
                return a.first < b.first;
            }
        }
    };
};