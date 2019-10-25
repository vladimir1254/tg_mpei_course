// https://leetcode.com/problems/maximum-depth-of-n-ary-tree/
/* 
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    int maxDepth(Node* root) {
        if(root==nullptr) return 0;
        int d=0;
        for(auto node:root->children)
        {
            d=max(d,maxDepth(node));
        }
        return 1+d;
    }
};
