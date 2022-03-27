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
    void parent(TreeNode* root, unordered_map<TreeNode*, TreeNode*> &parentTracker){
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            for(int i = 0; i < n; i++){
                auto *node = q.front();
                q.pop();
                if(node->left){
                    q.push(node->left);
                    parentTracker[node->left] = node;
                }
                if(node->right){
                    q.push(node->right);
                    parentTracker[node->right] = node;
                }
            }
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        //Step 1 : Store parent of the node because we have to go upward
        unordered_map<TreeNode*, TreeNode*> parentTracker;
        parent(root, parentTracker);
        // Step 2 : move in all direction
        // As we not want to repeated the already visited array.
        unordered_map<TreeNode*, bool> visited;
        queue<TreeNode*> q;
        q.push(target);
        visited[target] = true;
        int cnt_level = 0;
        while(!q.empty()){
            int n = q.size();
            if(cnt_level++ == k) break;
            for(int i = 0; i < n; i++){
                auto *curr = q.front(); 
                q.pop();
                // Store left in queue and marked as visited
                if(curr->left && !visited[curr->left]){
                    q.push(curr->left);
                    visited[curr->left] = true;
                }
                // sotre right in queue and marked as visited.
                if(curr->right && !visited[curr->right]){
                    q.push(curr->right);
                    visited[curr->right] = true;
                }
                // store parent in queue and marked as visited.
                if(parentTracker[curr] && !visited[parentTracker[curr]]){
                    q.push(parentTracker[curr]);
                    visited[parentTracker[curr]] = true;
                }
            }
        }
        // Step 3 : store remaning node of queue in ans.
        vector<int> ans;
        while(!q.empty()){
            ans.push_back(q.front()->val);
            q.pop();
        }
        return ans;
    }
};