// https://leetcode.com/problems/recover-a-tree-from-preorder-traversal/
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
   TreeNode* recursia(string &s,int &i,int d)
   {
       int k=s.find_first_of("123456789",i);
       if(k-i==d)  // k-i  кол-во тире.
       {
         
       }
       else
           return NULL;
       int c = s.find("-",k);// первое тире после числа.
       int q=stoi(s.substr(k,c-k)); // выделили число.
        i=c;  // начало переносим на новое тире
       TreeNode* root = new TreeNode(q);
       root->left=recursia(s,i,d+1);
        root->right=recursia(s,i,d+1);
       return root;
       
   }
    
    TreeNode* recoverFromPreorder(string S) {
        int k=S.find("-");
        TreeNode* root = new TreeNode(stoi(S.substr(0,k)));
        root->left=recursia(S,k,1);
        root->right=recursia(S,k,1);
        return root;
    }
};
