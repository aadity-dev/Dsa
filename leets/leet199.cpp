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
vector<int> rightSideView(TreeNode* root, int level = 0) {
    static vector<int> ans;
    if(level == 0) ans.clear();
    if(root == nullptr) return ans;
    if(level == ans.size()){
        ans.push_back(root->val);
    }
    rightSideView(root->right, level + 1);
    rightSideView(root->left, level + 1);
    return ans;
    }
};
//  if(root == NULL){
//             return;
//         }
//         queue <TreeNode*>q;
//         q.push(root);

//         while(!q.empty()){
//             for(int i = 0;i<q.size();i++){
//                 TreeNode* node = q.front();
//                 q.pop();
//             }

//         }