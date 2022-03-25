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
     TreeNode* recursive(TreeNode* root, int val) {
        if(!root) return root;
        if(val < root->val){
            root = recursive(root->left, val);
        }else if(val > root->val){
            root = recursive(root->right, val);
        }
        return root;
    }
    TreeNode* iterative(TreeNode* root, int val){
        while(root && root->val != val){
            root = val < root->val ? root->left : root->right;
        }
        return root;
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        if(!root) return root;
        // return recursive(root, val);
        return iterative(root, val);
    }
};