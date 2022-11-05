class TrieNode {
public:
    bool isEnd;
    TrieNode* children[26];
    TrieNode() {
        isEnd=false;
        for(int i=0;i<26;++i)
            children[i]=NULL;
    }
};

class Trie {
    TrieNode* root;
public:
    Trie(vector<string>& words) {
        root=new TrieNode();
        for(string& word:words)
            addWord(word);
    }
    TrieNode* getRoot() {
        return root;
    }
    void addWord(string& word) {
        TrieNode* curr=root;
        for(auto& ch:word){
            int index=ch-'a';
            if(!curr->children[index])
                curr->children[index]=new TrieNode();
            curr=curr->children[index];
        }
        curr->isEnd=true;
    }
    void deleteWord(string& word) {
        deleteWordUtil(word,word.length(),0,root);
    }
private:
    bool deleteWordUtil(string& word, int n, int depth, TrieNode* curr) {
        if(depth==n){
            curr->isEnd=false;
            if(isEmpty(curr)){
                // delete(curr);
                return true;
            }
            return false;
        }
        int index=word[depth]-'a';
        if(deleteWordUtil(word,n,depth+1,curr->children[index])){
            curr->children[index]=NULL;
            if(!curr->isEnd && isEmpty(curr)){
                // delete(curr);
                return true;
            }
            return false;
        }
        return false;
    }
    bool isEmpty(TrieNode* curr) {
        for(int i=0;i<26;++i)
            if(curr->children[i])
                return false;
        return true;
    }
};

class Solution {
public:
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        int R=board.size(),C=(R>0)?board[0].size():0;
        vector<string> ans;
        Trie trie(words);
        TrieNode* root=trie.getRoot();
        for(int r=0;r<R;++r){
            for(int c=0;c<C;++c){
                string word;
                helper(board,R,C,r,c,root,word,ans,trie);
            }
        }
        return ans;
    }
private:
    void helper(vector<vector<char>>& board, int R, int C, int r, int c, TrieNode* root, string& word, vector<string>& ans, Trie& trie) {
        if(r<0 || r>=R || c<0 || c>=C || board[r][c]==' ')
            return;
        if(root->children[board[r][c]-'a']){
            word+=board[r][c];
            root=root->children[board[r][c]-'a'];
            if(root->isEnd){
                ans.push_back(word);
                trie.deleteWord(word);
            }
            char ch=' ';
            swap(ch,board[r][c]);
            helper(board,R,C,r-1,c,root,word,ans,trie);
            helper(board,R,C,r,c+1,root,word,ans,trie);
            helper(board,R,C,r+1,c,root,word,ans,trie);
            helper(board,R,C,r,c-1,root,word,ans,trie);
            swap(ch,board[r][c]);
            word.pop_back();
        }
    }
};