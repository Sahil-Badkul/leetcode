struct Node{
    Node* links[26];
    bool flag = false;
    bool containkey(char ch){
		return (links[ch - 'a'] != NULL);
	}
    void put(char ch, Node* node){
        links[ch - 'a'] = node;
    }
    Node* get(char ch){
        return links[ch - 'a'];
    }
    void setEnd(){
        flag = true;
    }
    bool isEnd(){
        return flag;
    }
};
class MagicDictionary {
private:
    Node* root;
    void insert(string word){
        Node* node = root;
        for(int i = 0; i < word.size(); i++){
            if(!node->containkey(word[i])){
                node->put(word[i], new Node());
            }
            node = node->get(word[i]);
        }
        node->setEnd();
    }
public:
    MagicDictionary() {
        root = new Node();
    }
    
    void buildDict(vector<string> dictionary) {
        for(auto word : dictionary) insert(word);
    }
   bool searchSupport(string s, int index, Node* node, bool allowedOnce) {
        
        // Base case. Found NULL, It can not be EndOfWord.
        if(node == NULL)
            return false;


        for(int i = index; i < s.size(); i++) {
            
            // allowedOnce is set then we try all characters for current s[i].
            if(allowedOnce) {

                for(char p = 'a'; p <= 'z'; p++) {
                        
                    // allowedOnce is depend, s[i] and p is same or not.
                    // If same, then allowedOnce = true else false.
                    if(searchSupport(s, i+1, node->get(p), s[i]==p)) {
                        return true;
                    }
                }

                // Try all characters but did not find the end of word. Return false.
                return false;
            }
                
            // allowedOnce = false, then node must contains s[i].
            if(!node->containkey(s[i]))
                return false;

            // Move to next Node.
            node = node->get(s[i]);
        }
        
        // node is EndOfWord and allowedOnce == false(one mismatch) then we return true.
        if(node != NULL && !allowedOnce && node->isEnd())
            return true;

        return false;
    }
    bool search(string searchWord) {
        return searchSupport(searchWord, 0, root, true);
    }
};

/**
 * Your MagicDictionary object will be instantiated and called as such:
 * MagicDictionary* obj = new MagicDictionary();
 * obj->buildDict(dictionary);
 * bool param_2 = obj->search(searchWord);
 */