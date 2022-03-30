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
    TreeNode* makeTree(vector<int> &postorder, int postStart, int postEnd, vector<int> & inorder, int inStart,int inEnd, unordered_map<int,int> &inmap){
        if(inStart > inEnd || postStart > postEnd){
            return NULL;
        }
        TreeNode* root = new TreeNode(postorder[postEnd]);
        int inRoot = inmap[postorder[postEnd]];
        int numsleft = inRoot - inStart;
        root->left = makeTree(postorder,postStart, postStart+numsleft-1, 
                             inorder, inStart, inRoot-1, inmap);
        root->right = makeTree(postorder, postStart+numsleft, postEnd-1,
                              inorder, inRoot+1, inEnd, inmap);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(inorder.size() != postorder.size()) return NULL;
        unordered_map<int, int> inmap;
        for(int i = 0; i < inorder.size(); i++){
            inmap[inorder[i]] = i;
        }
        TreeNode* root = makeTree(postorder, 0, postorder.size()-1,
                                  inorder, 0, inorder.size()-1, inmap);
        return root;
    }
};