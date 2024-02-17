/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
int count=0;
void solve(Node* root,int h){
    if(!root){ count=max(count,h);
    return;
    }
    count=max(count,h);

    for(int i=0;i<(root->children).size();i++){
        solve((root->children)[i],h+1);
    }
    

}
    int maxDepth(Node* root) {
        if(!root) return 0;
   solve(root,1);

        return count;
        
    }
};