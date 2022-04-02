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
    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode*> st;
        int cnt = 0;
        while(true){
           if(root != NULL){
               st.push(root);
               root = root->left;
           }else{
               if(st.empty()){
                   break;
               }else{
                   root = st.top();
                   st.pop();
                   cnt++;
                   if(cnt == k) return root->val;
                   root = root->right;
               }
           }
        }
        return -1;
    }
};