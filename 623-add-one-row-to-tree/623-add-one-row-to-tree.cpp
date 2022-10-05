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
    void insert(TreeNode* root, int val, int curr_depth, int depth){
        if(root == NULL) return;
        if(curr_depth == depth-1){
            TreeNode* temp = root->left;
            root->left = new TreeNode(val);
            root->left->left = temp;
            temp = root->right;
            root->right = new TreeNode(val);
            root->right->right = temp;
        }else{
            insert(root->left, val, curr_depth+1, depth);
            insert(root->right, val, curr_depth+1, depth);
        }
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth == 1){
            TreeNode* curr = new TreeNode(val);
            curr->left = root;
            return curr;
        }
        insert(root, val, 1, depth);
        return root;
    }
};