struct Node{
    Node* links[2];
    bool containsKey(int ind){
        return (links[ind] != NULL);
    }
    void put(int ind, Node* node){
        links[ind] = node;
    }
    Node* get(int ind){
        return links[ind];
    }
};
class Trie{
private:
    Node* root;
public:
    Trie(){
        root = new Node();
    }
    void insert(int num){
        Node* node = root;
        for(int i = 31; i >= 0; i--){
            int bit = (num >> i) & 1;
            if(!node->containsKey(bit)){
                node->put(bit, new Node());
            }
            node = node->get(bit);
        }
    }
    int findMax(int num){
        Node* node = root;
        int maxNum = 0;
        for(int i = 31; i >= 0; i--){
            int bit = (num >> i) & 1;
            if(node->containsKey(!bit)){
                maxNum = maxNum | (1 << i);
                node = node->get(!bit);
            }else
                node = node->get(bit);
        }
        return maxNum;
    }
};
class Solution {
public:
    vector<int> maximizeXor(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> ans(queries.size(), 0);
        sort(nums.begin(), nums.end());
        vector<pair<int, pair<int,int>>> oflineQuerie;
        int idx = 0;
        for(auto &it : queries){
            oflineQuerie.push_back({it[1],{it[0], idx++}});
        }
        sort(oflineQuerie.begin(), oflineQuerie.end());
        int i = 0, n = nums.size();
        Trie trie;
        for(auto &it : oflineQuerie){
            while(i < n && nums[i] <= it.first){
                trie.insert(nums[i]);
                i++;
            }
            if(i != 0){
                ans[it.second.second] = trie.findMax(it.second.first);
            }else{
                ans[it.second.second] = -1;
            }
        }
        return ans;
    }
};