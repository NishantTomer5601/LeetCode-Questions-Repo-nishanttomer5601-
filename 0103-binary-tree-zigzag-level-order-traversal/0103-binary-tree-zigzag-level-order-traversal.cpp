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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        if(!root) return ans;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int> v;
            for(int i=0;i<size;i++){
                TreeNode* t=q.front();
                q.pop();
                v.push_back(t->val);
                if(t->left)q.push(t->left);
                if(t->right)q.push(t->right);


            }
 ans.push_back(v);
        }
        for(int i=0;i<ans.size();i++){
            if(i&1) reverse(ans[i].begin(),ans[i].end());
        }

        return ans;
        
    }
};