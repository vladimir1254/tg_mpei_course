// https://leetcode.com/problems/swap-nodes-in-pairs/
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
    ListNode* swapPairs(ListNode* head) {
      ListNode* shead = new ListNode{0};
        shead->next=head;
        ListNode* one,*two,*res = shead;
        while(res->next && res->next->next)
        {
            one=res->next;
            two=res->next->next;
            
            one->next=two->next;
            two->next=one;
            
            res->next=two;
            res=one;
        }
        return shead->next;
        
    }  
};
