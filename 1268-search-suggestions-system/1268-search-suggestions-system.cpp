class Solution {
public:
    class Trie{
    public: 
    vector<Trie*> children;
    bool isEnd;
    
    Trie(){
        children = vector<Trie*> (26, nullptr);
        isEnd = false;
    }
    
    void addWord(string word){
        Trie* node = this;
        for(auto &c : word){
            if(node->children[c - 'a'] == nullptr){
                node->children[c - 'a'] = new Trie();
            }
            node = node->children[c - 'a'];
        }
        node->isEnd = true;
    }
    
    void searchWord(vector<string> &res, string partial, int &count){
        Trie* node =this;
        if(count > 2) return;
        if(node->isEnd == true){
            res.push_back(partial);
            count++;
        }
        for(int i = 0; i < 26; i++){
            if(node->children[i] != nullptr){
                partial += (i+'a');
                node->children[i]->searchWord(res, partial, count);
                partial.pop_back();
            }
        }
    }
};
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        Trie* trie = new Trie();
        int n = searchWord.size();
        vector<vector<string>> res;
        for(string product : products){
            trie->addWord(product);
        }
        string partial = "";
        for(int i = 0; i < n; i++){
            if(trie->children[searchWord[i] - 'a'] == nullptr){
                while(i < n){
                    res.push_back({});
                    i++;
                }
            }else{
                vector<string> cprefix;
                partial += searchWord[i];
                trie = trie->children[searchWord[i]-'a'];
                int cnt = 0;
                trie->searchWord(cprefix, partial, cnt);
                res.push_back(cprefix);
            }
        }
        return res;
    }
};