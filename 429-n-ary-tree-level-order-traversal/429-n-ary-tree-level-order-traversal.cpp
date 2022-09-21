/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
private: 
    vector<vector<int>> res;
public:
    void rec(Node* root, int level){
        if(!root) return;
        if(level == res.size()) res.push_back({});
        res[level].push_back(root->val);
        for(auto &child : root->children){
            rec(child, level+1);
        }
    }
    vector<vector<int>> levelOrder(Node* root) {
        rec(root, 0);
        return res;
    }
};