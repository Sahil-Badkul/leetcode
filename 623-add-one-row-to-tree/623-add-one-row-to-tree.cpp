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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth == 1){
            TreeNode* node = new TreeNode(val);
            node->left = root;
            return node;
        }
        stack<pair<TreeNode*, int>> st;
        st.push({root, 1});
        while(!st.empty()){
            TreeNode* curr = st.top().first;
            int curr_depth = st.top().second;
            st.pop();
            if(curr == NULL) continue;
            if(curr_depth == depth-1){
                TreeNode* left = curr->left;
                TreeNode* right = curr->right;
                TreeNode* newLeft = new TreeNode(val);
                TreeNode* newRight = new TreeNode(val);
                curr->right = newRight;
                curr->left = newLeft;
                newLeft->left = left;
                newRight->right = right;
            }else{
                st.push({curr->left, curr_depth+1});
                st.push({curr->right, curr_depth+1});
            }
        }
        return root;
    }
};