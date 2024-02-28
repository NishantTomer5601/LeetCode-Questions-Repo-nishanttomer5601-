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
int lvl=0,max_lvl=-1,ans=-1;
void  solve(TreeNode* root, int lvl){
    if(!root) return;
    if(!root->left && !root->right){
        if(lvl>max_lvl){
            max_lvl=lvl;
            ans=root->val;

        }
    }
    else{
        solve(root->left,lvl+1);
        solve(root->right,lvl+1);
    }


}
    int findBottomLeftValue(TreeNode* root) {
        solve(root,lvl);
        return ans;
        
    }
};