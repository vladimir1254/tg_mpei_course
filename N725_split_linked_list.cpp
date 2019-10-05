// https://leetcode.com/problems/split-linked-list-in-parts/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* root, int k) {
        vector<ListNode*> a(k, nullptr);
        int length=0;
        for(ListNode* node=root;node!=nullptr;node=node->next)
            length++;
        int t=length/k;
        int w=length%k;
        ListNode* node=root;
        ListNode* prev=nullptr;
        for(int i=0;node!=nullptr && i<k ;i++)
        {
            a[i]=node;
            if (w>0)
                t++;
            for(int j=0;j<t;j++)
            {
               prev=node;
                node=node->next;
            }
            if (w>0)
                t--;
            prev->next=nullptr;
            w--;
        }
       return a; 
    }
};
