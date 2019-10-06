// https://leetcode.com/problems/same-tree/
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
    void recursia(TreeNode* p,TreeNode* q,bool &f)
    {
        if(!p || !q)
        {
            if(p&& !q)
              f=false;  
             if(!p && q)
              f=false;  
            return;
        }
        else
        {
            if(p->val!=q->val)
            {
                f=false;
                return;
            }
            else
            {
                if((p->left && !q->left)||(!p->left && q->left))
                {
                    f=false;
                    return;
                }
                else
                recursia(p->left,q->left,f);
                if((p->right && !q->right)||(!p->right && q->right))
                {
                    f=false;
                    return;
                }
                else
                    recursia(p->right,q->right,f);
            }
        }
        }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool flag=true;
        recursia(p,q,flag);
        return flag;
    }
};
