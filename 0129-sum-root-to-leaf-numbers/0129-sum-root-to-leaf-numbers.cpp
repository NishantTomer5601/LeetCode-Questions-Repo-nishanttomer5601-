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
    int sum=0;
    
    void solve(TreeNode* root,string ans){
        if(!root){
            return;
        }
        if(!root->left && !root->right){
            ans+=to_string(root->val);
            int x=stoi(ans);
            sum+=x;
            
            return;
        }
        ans+=to_string(root->val);
        solve(root->left,ans);
        solve(root->right,ans);
        
        
    }
    
    int sumNumbers(TreeNode* root) {
        string ans="";
        solve(root,ans);
        return sum;
        
    }
};
