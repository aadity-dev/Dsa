

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if (root == nullptr) return result;
        
        queue<TreeNode*> q;
        q.push(root);
        bool checklr = true;
        
        while (!q.empty()) {
            int levelSize = q.size();
            vector<int> levelElements;
            
            for (int i = 0; i < levelSize; i++) {
                TreeNode* frontNode = q.front();
                q.pop();
                
                levelElements.push_back(frontNode->val);
                
                if (frontNode->left) {
                    q.push(frontNode->left);
                }
                if (frontNode->right) {
                    q.push(frontNode->right);
                }
            }
            
            if (!checklr) {
                reverse(levelElements.begin(), levelElements.end());
            }
            
            result.push_back(levelElements);
            checklr = !checklr;
        }
        
        return result;
    }
};