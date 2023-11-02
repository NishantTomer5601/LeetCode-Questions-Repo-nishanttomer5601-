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
typedef pair<int, int> Pair;

class Solution {
public:
    int count; // Counter to keep track of nodes with values equal to the average.

    int averageOfSubtree(TreeNode* root) {
        dfs(root); // Start the depth-first traversal.
        return count; // Return the count of nodes with values equal to the average.
    }

    Pair dfs(TreeNode* node) {
        if (node == nullptr)
            return Pair(0, 0); // Base case: return (0, 0) for a null node.

        // Recursively explore the left and right subtrees.
        Pair left = dfs(node->left);
        Pair right = dfs(node->right);

        // Calculate the sum and count of the current node and its subtrees.
        int nodeSum = node->val + left.first + right.first;
        int nodeCount = 1 + left.second + right.second;

        // Check if the current node's value is equal to the average of its subtree.
        if (node->val == nodeSum / nodeCount) {
            count++;
        }

        // Return the Pair with the sum and count for the current subtree.
        return Pair(nodeSum, nodeCount);
    }
};