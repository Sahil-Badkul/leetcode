/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool symmetric(TreeNode *l, TreeNode* r){
        if(l == NULL and r == NULL) return true;
        if(l == NULL or r == NULL or l->val != r ->val) return false;
        return symmetric(l->left, r->right) && symmetric(l->right, r->left);
    }
    bool iterative(TreeNode* root){
        if(!root) return true;
        queue<TreeNode*> q;
        q.push(root->left);
        q.push(root->right);
        while(!q.empty()){
            auto *l = q.front();
            q.pop();
            auto *r = q.front();
            q.pop();
            if(!l and r || l and !r) return false;
            if(l){
                if(l->val != r->val) return false;
                q.push(l->left);
                q.push(r->right);
                q.push(l->right);
                q.push(r->left);
            }
        }
        return true;
    }
    bool isSymmetric(TreeNode* root) {
        // return symmetric(root->left, root->right);
        return iterative(root);
    }
};