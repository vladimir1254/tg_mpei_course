// https://leetcode.com/problems/find-bottom-left-tree-value/
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
    void recursia(TreeNode* root,int height)
    {
        if(root==NULL)
            return;
        if(height>maxheight)
        {
            maxheight = height;
            res=root->val;
        }
        recursia(root->left,height+1);
        recursia(root->right,height+1);
    }
    int findBottomLeftValue(TreeNode* root) {
        recursia(root,1);
        return res;
    }
    private:
    int res=0;
    int maxheight=0;
};
