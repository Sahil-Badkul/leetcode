```
class Solution {
public:
TreeNode* addOneRow(TreeNode* root, int val, int depth) {
if(depth == 1){
TreeNode* newhead = new TreeNode(val);
newhead->left = root;
return newhead;
}
stack<pair<TreeNode*, int>> s;
s.push({root, 1});
while(!s.empty()){
TreeNode* cur = s.top().first;
int curdep = s.top().second;
s.pop();
if(cur == nullptr) continue;
if(curdep == depth- 1){
TreeNode* templeft = cur->left;
TreeNode* tempright = cur->right;
TreeNode* newleft = new TreeNode(val);
TreeNode* newright = new TreeNode(val);
cur->left = newleft;
cur->right = newright;
newleft->left = templeft;
newright->right = tempright;
}
else{
s.push({cur->left, curdep+1});
s.push({cur->right, curdep+1});
}
}
return root;
}
};
```