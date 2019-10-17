// https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
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
    TreeNode* recursia(vector<int> nums,int begin,int end)
    {
        if (begin>end) return NULL;
        int mid=(end+begin)/2;
        TreeNode * root=new TreeNode(nums[mid]);
        root->left=recursia(nums,begin,mid-1);
        root->right=recursia(nums,mid+1,end);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
       return recursia(nums,0,nums.size()-1);
    }
};
