/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* recursive(TreeNode* root, TreeNode* p, TreeNode* q){
        if(root == p || root == q){
           return root;
       }
        if((root->val > p->val && root->val < q->val) || (root->val < p->val && root->val > q->val)) return root;
        if(root->val > p->val && root->val > q->val){
            return recursive(root->left, p, q);
        }
        else if(root->val < p->val && root->val < q->val){
            return recursive(root->right, p, q);
        }
        return NULL;
    }
    TreeNode* iterative(TreeNode* root, TreeNode* p, TreeNode* q){
        while(root != NULL){
            if(root->val > p->val && root->val > q->val){
                root = root->left;
            }else if(root->val < p->val && root->val < q->val){
                root = root->right;
            }else{
                break;
            }
        }
        return root;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // return recursive(root, p, q);
        return iterative(root, p, q);
        
    }
};