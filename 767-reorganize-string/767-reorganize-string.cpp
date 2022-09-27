class Solution {
public:
    string reorganizeString(string s) {
        map<char,int> mp;
        for(auto &ch : s) mp[ch]++;
        priority_queue<pair<int,char>> pq;
        for(auto [ch, f] : mp) pq.push({f,ch});
        string ans = "";
        while(pq.size() > 1){
            auto fs = pq.top(); pq.pop();
            auto sn = pq.top(); pq.pop();
            ans += fs.second; fs.first--;
            ans += sn.second; sn.first--;
            // cout<<fs.first<<" "<<fs.second<<endl;
            // cout<<sn.first<<" "<<sn.second<<endl;
            // cout<<endl;
            if(fs.first > 0) pq.push(fs);
            if(sn.first > 0) pq.push(sn);
        }
        // cout<<pq.size()<<endl;
        // cout<<pq.top().first<<" "<<pq.top().second<<endl;
        if(!pq.empty()){
            if(pq.top().first > 1)
                return "";
            else
                ans+=pq.top().second;
        }
        return ans;
    }
};