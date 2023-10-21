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
vector<int>ans;
unordered_map<int,int>mp;
int fun(TreeNode* root)
{
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL) 
    {
        mp[root->val]++;
        return root->val;
    }
    int l=fun(root->left);
    int r=fun(root->right);
    mp[l+r+root->val]++;
    return l+r+root->val;
}
    vector<int> findFrequentTreeSum(TreeNode* root) {
        //cout<<"mo"<<endl;
        int mx=INT_MIN;
         fun(root);
        for(auto i:mp)
        {
            mx=max(mx,i.second);
        }
        for(auto i:mp)
        {
            if(i.second==mx)
            {
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};