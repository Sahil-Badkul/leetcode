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
    int mx = -1001;
    int fun(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        int left = fun(root->left);
        int right = fun(root->right);
        left = left > 0 ? left : 0;
        right = right > 0 ? right : 0;
        mx = max(mx, left + right + root->val);
        return root->val + max(left, right);
    }
    int maxPathSum(TreeNode* root) {
        fun(root);
        return mx;
    }
};