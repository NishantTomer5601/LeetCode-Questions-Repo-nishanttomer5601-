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
    int count=0;   
    unordered_map<int, int> v;   //important thing to learn:
    
    void solve(TreeNode* root){
        if(!root) return ;
        
         v[root->val]+=1;
        if(!(root->left) && !(root->right)){
           
            int ch=0;
            for (auto a : v)
                if (a.second % 2 == 1)
                    ch++;
            
            if(ch<=1){
                count++;
             }
            
            
        }
        
        
        
        
        solve(root->left);
        solve(root->right);
   
         v[root->val]-=1;
        
    }
    
    
    
    
    int pseudoPalindromicPaths (TreeNode* root) {
        solve(root);
        return count;
        
    }
};

