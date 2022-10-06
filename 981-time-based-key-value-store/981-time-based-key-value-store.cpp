class TimeMap {
public:
    unordered_map<string, vector<pair<int, string>>> mp;
    TimeMap() {}
    
    void set(string key, string value, int ts) {
        mp[key].push_back({ts, value});
    }
    
    string get(string key, int ts) {
        if(mp.find(key) == mp.end()) return "";
        if(ts < mp[key][0].first){
            return "";
        }
        int left = 0, right = mp[key].size();
        while(left < right){
            int mid = left + (right-left)/2;
            if(mp[key][mid].first <= ts){
                left = mid+1;
            }else{
                right = mid;
            }
        }
        if(right == 0) return "";
        return mp[key][right-1].second;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp as ts);
 * string param_2 = obj->get(key,timestamp);
 */