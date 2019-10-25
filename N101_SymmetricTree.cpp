// https://leetcode.com/problems/symmetric-tree/
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
    bool recursia(TreeNode* rl,TreeNode* rr)
    {
        if((rl==nullptr && rr!=nullptr)||(rr==nullptr && rl!=nullptr))
            return false;
        if(rl==nullptr && rr==nullptr)
            return true;
        if(rl->val!=rr->val)
            return false;
    
        if((rl->val == rr->val)&&(rl->left==nullptr)&&(rl->right==nullptr)&&(rr->left==nullptr)&&(rr->right==nullptr))
            return true;
        return(recursia(rl->left,rr->right) && recursia(rl->right,rr->left));
    }
    bool isSymmetric(TreeNode* root) {
          if(root==nullptr)
            return true;
        if((root->left!=nullptr && root->right == nullptr )||(root->left==nullptr && root->right != nullptr ))
            return false;
        return(recursia(root->left,root->right));
        
    }
};
