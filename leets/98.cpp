
98.cpp/**
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

// class Solution {
// public:
//     bool isValidBST(TreeNode* root, TreeNode* minx, TreeNode* maxx)
//     {
//         if(root == nullptr) return true;

//         if((minx != nullptr && root->val <= minx->val) || (maxx != nullptr && root->val >= maxx->val)){
//             return false;
//         }

//         return isValidBST(root->left,minx, root) && isValidBST(root->right, root, maxx);
//     }
// };
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return validate(root, nullptr, nullptr);
    }
private:
    bool validate(TreeNode* root, TreeNode* minx, TreeNode* maxx) {
        if (root == nullptr) return true;
        if ((minx != nullptr && root->val <= minx->val) || 
            (maxx != nullptr && root->val >= maxx->val)) {
            return false;
        }
        return validate(root->left, minx, root) && 
               validate(root->right, root, maxx);
    }
};