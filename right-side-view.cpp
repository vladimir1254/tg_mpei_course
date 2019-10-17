// https://leetcode.com/problems/binary-tree-right-side-view/
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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>a;
        recursia(root,a,1);
        return a;
    }
    void recursia(TreeNode* x,vector<int> &a,int lvl)
    {
        if(x==nullptr)
            return;
        if(a.size()<lvl) a.push_back(x->val);
        recursia(x->right,a,lvl+1);
        recursia(x->left,a,lvl+1);
    }
};
