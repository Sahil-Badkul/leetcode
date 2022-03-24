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
    int widthOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;
        int maxWidth = 1;
        queue<pair<TreeNode*,int>> q;
        q.push({root, 0});
        while(!q.empty()){
            int start = q.front().second;
            int end = q.back().second;
            maxWidth = max(maxWidth, end-start+1);
            int n = q.size();
            for(int i=0;i<n;i++){
                auto *root = q.front().first;
                int j = q.front().second - start;
                q.pop();
                int left = 1LL*j*2+1;
                int right = 1LL *j*2+2;
                if(root->left != NULL) q.push({root->left, left});
                if(root->right != NULL) q.push({root->right, right});
            }
        }
        return maxWidth;
    }
};