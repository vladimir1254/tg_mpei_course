// https://leetcode.com/problems/path-sum/
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
    bool hasPathSum(TreeNode* root, int sum) {
      if(root==nullptr)
          return false;
        sum-=root->val;
        if(root->right==nullptr && root->left == nullptr && sum == 0)
            return true;
            return(hasPathSum(root->right,sum)||hasPathSum(root->left,sum));
    }           
};
