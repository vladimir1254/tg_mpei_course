// https://leetcode.com/problems/maximum-difference-between-node-and-ancestor/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxAncestorDiff(TreeNode* root,int mx=0,int mn=100000) {
        if(root==nullptr) return mx-mn;
        mx=max(mx,root->val);
            mn=min(mn,root->val);
        return max(maxAncestorDiff(root->left,mx,mn),maxAncestorDiff(root->right,mx,mn));
    }
};
