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
    TreeNode* helperIter(vector<int> &nums, int low, int high){
        while(low <= high){
            int mid = low + (high-low)/2;
            TreeNode* node = new TreeNode(nums[mid]);
            node->left = helperIter(nums, low, mid-1);
            node->right = helperIter(nums, mid+1, high);
            return node;
        }
        return NULL;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return helperIter(nums, 0, nums.size()-1);
    }
};

/*
root i;
left 2*i+1
right 2*i+2
*/