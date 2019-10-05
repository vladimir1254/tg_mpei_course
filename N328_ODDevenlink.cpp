// https://leetcode.com/problems/odd-even-linked-list/
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
    
    ListNode* oddEvenList(ListNode* head) {
        if(!head || head->next==nullptr)
        {
            return head;
        }
        ListNode* prev=head;
            ListNode* cur=head->next;
            ListNode* sled=cur->next;
        if(!sled){
        return head;
        }
        while(sled and cur)
        {
            
            cur->next=sled->next;
            sled->next=prev->next;
            prev->next=sled;
            prev=prev->next;
            cur=cur->next;
            if(cur)
            {
                sled=cur->next;
            }
          
        }
        return head;
    }
};
