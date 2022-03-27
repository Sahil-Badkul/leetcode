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
    int findleftheight(TreeNode *node){
        int h = 0;
        while(node){
            h++;
            node = node->left;
        }
        return h;
    }
    int findrightheight(TreeNode* node){
        int h = 0;
        while(node){
            h++;
            node = node->right;
        }
        return h;
    }
    int countNodes(TreeNode* root) {
        if(root == NULL) return 0;
        int lh = 1+findleftheight(root->left);
        int rh = 1+findrightheight(root->right);
        if(lh == rh) return (1<<lh) -1;
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};