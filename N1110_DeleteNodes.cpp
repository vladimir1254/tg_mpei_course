// https://leetcode.com/problems/delete-nodes-and-return-forest/
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
    TreeNode* dfs(TreeNode* root,vector<int> del,vector<TreeNode*>& res)
    {
        if(!root)
            return root;
        root->left=dfs(root->left,del,res);
        root->right = dfs(root->right,del,res);
        if(find(del.begin(),del.end(),root->val)!=del.end())
        {
            if(root->left)
                res.push_back(root->left);
            if(root->right)
                res.push_back(root->right);
                    return NULL;
            }
        else
            return root;
    }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        vector<TreeNode*> res;
        dfs(root,to_delete,res);
        if(find(to_delete.begin(),to_delete.end(),root->val)==to_delete.end())
            res.push_back(root);
        return res;
    }
};
