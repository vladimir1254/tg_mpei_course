// https://leetcode.com/problems/remove-nth-node-from-end-of-list/
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      if(!head || head->next==NULL)
          return NULL;
       ListNode* hh = head;
        int l=0;
        while(hh)
        {
            hh=hh->next;
            l++;
        }
        if(l==n)
            return head->next;
        l=l-n-1;// предыдущий эл-нт
        hh=head;
        while(l>0)
        {
            hh=hh->next;
            l--;
        }
        ListNode* h1 = hh->next;
        hh->next = h1->next;
        return head;
    }
};
