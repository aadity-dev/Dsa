class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root,int level = 0) { 
        static vector<vector<int>> ans;
        if (level == 0) ans.clear();
        if(!root) return ans;

        if(ans.size() == level){
            ans.push_back({});
        }
        
        ans[level].push_back(root->val);
        
        levelOrder(root->left, level + 1);
        levelOrder(root->right,level +1);
        return ans;
    }
};