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
#define PB push_back;
class Solution {
public:
    vector<string> v;
    string smallestFromLeaf(TreeNode* root) {
        string ans = "";
        solve(root, ans);
        for(int i=0;i<v.size();i++){
            reverse(v[i].begin(),v[i].end());
        }
        sort(v.begin(),v.end());
        string res= v[0];
        // reverse(res.begin(),res.end());
        return res;
    }
    void solve(TreeNode* root, string &str){
        if(root == NULL)
            return;
        str += (root->val) + 'a';
        cout<<str<<" ";
        if(!root->left && !root->right){
            if(isLeaf(root))
                v.push_back(str);
        }
        solve(root->left,str);
        solve(root->right,str);
        int n(str.length());
        str = str.substr(0,n-1);
    }
    bool isLeaf(TreeNode* root){
        if(!root->left && !root->right)
            return true;
        return false;
    }
};