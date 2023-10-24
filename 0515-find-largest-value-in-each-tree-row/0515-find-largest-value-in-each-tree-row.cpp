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
    vector<int> largestValues(TreeNode* root) {
        if(!root){return {};}
        queue<TreeNode*> curr_q, next_q;
        curr_q.push(root);
        vector<int> ans;
        int curMax = INT_MIN;
        while(!curr_q.empty()){
            TreeNode *node = curr_q.front();
            curr_q.pop();
            curMax = max(curMax, node->val);
            if(node->right){next_q.push(node->right);}
            if(node->left){next_q.push(node->left);}
            if(curr_q.empty()){
                ans.push_back(curMax);
                curMax = INT_MIN, curr_q = next_q, next_q = {};
            }
        }
        return ans;
    }
};