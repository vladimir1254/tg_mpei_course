// https://leetcode.com/problems/binary-tree-maximum-path-sum/
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
   int path(TreeNode* root,int& res) // path возвращает значения для отдельной ветки.
    {   // res - результат.
        if(root==NULL) return 0;
       int left_r = path(root->left,res);
       int right_r=path(root->right,res);
      if(left_r<0) left_r=0;
       if(right_r<0) right_r=0;
       res = max(root->val+left_r+right_r,res);
       return root->val+=max(left_r,right_r);
   }
    int maxPathSum(TreeNode* root) {
        int r = INT_MIN;
        path(root,r);
        return r;
           
    }
};
