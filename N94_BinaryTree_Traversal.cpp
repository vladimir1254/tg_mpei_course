// https://leetcode.com/problems/binary-tree-inorder-traversal/
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
    void recursia(TreeNode* r,vector<int> & x)
    {
          if (!r)
          {
              return;
          }
        recursia(r->left,x);
          x.push_back(r->val);
        recursia(r->right,x);
      
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> a;
        recursia(root,a);
        return a;
    }
};
