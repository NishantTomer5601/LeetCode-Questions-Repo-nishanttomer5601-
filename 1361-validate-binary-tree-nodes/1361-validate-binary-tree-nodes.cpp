class Solution {
public:

    int solve(int node, vector <int> &leftChild, vector <int> &rightChild) {
        if(node == -1)
            return 0;
        return 1 + solve(leftChild[node], leftChild, rightChild) + solve(rightChild[node], leftChild, rightChild);
    }

    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        vector <int> inDegree(n, 0);
        for(int i = 0; i < n; i++) {
            if(leftChild[i] != -1)
                inDegree[leftChild[i]]++;
            if(rightChild[i] != -1)
                inDegree[rightChild[i]]++;
        }

        int a1 = 0, a2 = 0, root = -1;
        for(int i = 0; i < n; i++) {
            if(inDegree[i] == 0)
                a1++, root = i;
            else if(inDegree[i] == 1)
                a2++;
        }

        if(a1 != 1 || a2 != (n - 1))
            return false;

        int ans = solve(root, leftChild, rightChild);
        return (ans == n);
    }
};