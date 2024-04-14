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
/*
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        
    }
};
*/

class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        return sumOfLeftLeavesHelper(root, false);
    }

private:
    int sumOfLeftLeavesHelper(TreeNode* root, bool is_left) {
        if (!root) {
            return 0;
        }
        if (!root->left && !root->right) {
            return is_left ? root->val : 0;
        }
        return sumOfLeftLeavesHelper(root->left, true) +
               sumOfLeftLeavesHelper(root->right, false);
    }
};