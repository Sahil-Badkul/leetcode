class TimeMap {
public:
    unordered_map<string, map<int, string>> mp;
    TimeMap() {}
    
    void set(string key, string value, int ts) {
        mp[key][ts] = value;
    }
    
    string get(string key, int ts) {
        if(mp.find(key) == mp.end()) return "";
        auto it = mp[key].upper_bound(ts);
        //if iterator in pointing to fist element it means, no time <= timestamp exits.
        if(it == mp[key].begin()){
            return "";
        }
        return prev(it)->second;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp as ts);
 * string param_2 = obj->get(key,timestamp);
 */