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

//Since it is a question involving level order traversal, we will use queue but for indexing
class Solution {
public:
unordered_map<int,pair<int,int>> map;
    int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        queue<pair<TreeNode*,unsigned long long>> q;
        q.push({root,0}); //following 0  based indexing
        
        int ans=1;
        while(!q.empty()){
            
            int itr=q.size();
            long long width=q.back().second-q.front().second+1;
            ans=max(ans,(int)width);
                for(int i=1;i<=itr;i++){
                    pair<TreeNode*,unsigned long long> p=q.front();
                    q.pop();
                    TreeNode* temp=p.first;
                    unsigned long long index=p.second;
                    if(temp->left){
                        q.push({temp->left,2*index+1});
                    }
                    if(temp->right){
                        q.push({temp->right,2*index+2});
                    }
                    
                    
                }
        }
        
        return ans;
        
        
        
        
        

        
    }
};