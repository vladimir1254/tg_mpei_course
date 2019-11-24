// https://leetcode.com/problems/validate-binary-search-tree/
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
    bool isValidBST(TreeNode* root,TreeNode* min=NULL,TreeNode* max=NULL) {
        if(root==NULL)
            return true;
        if(min!=NULL && root->val<=min->val) return false;
           if(max!=NULL&& root->val>=max->val) return false;
            return isValidBST(root->left,min,root)&&isValidBST(root->right,root,max);
    }
};
