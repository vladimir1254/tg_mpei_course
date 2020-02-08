// https://leetcode.com/problems/merge-two-sorted-lists/
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        ListNode* list=new ListNode(0);
        ListNode* cur = list;
        if(!l1 && !l2)
            return NULL;
        while(l1 && l2)
        {
            if(l1->val<l2->val)
            {
                cur->next=l1;
                cur=l1;
                l1=l1->next;
            }
            else
            {
                cur->next=l2;
                cur=l2;
                l2=l2->next;
            }
        }
        if(l1)
        {
            cur->next = l1;
        }
        if(l2)
        {
            cur->next=l2;
        }
        return list->next;
    }
};
