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
    void helper(TreeNode*root, int key, vector<int> ds, vector<vector<int>> &res){
        if(!root) return;
        if(root->left == NULL && root->right == NULL && root->val == key){
            ds.push_back(root->val);
            res.push_back(ds);
            return;
        }
        ds.push_back(root->val);
        helper(root->left, key-root->val, ds, res);        
        helper(root->right, key-root->val, ds, res);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> res;
        if(root == NULL) return res;
        vector<int> ds;
        helper(root, targetSum, ds, res);
        return res;
    }
};