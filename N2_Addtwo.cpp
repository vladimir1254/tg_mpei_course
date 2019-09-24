// https://leetcode.com/problems/add-two-numbers/submissions/
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
   ListNode* l3=new ListNode(0);
        ListNode* l4=l3;
        int cur = 0;
       while(l1!=NULL || l2!=NULL)
       {
           int value1=0;
           int value2=0;
           if(l1!=NULL)
           {
             value1=l1->val;  
              l1=l1->next;
           }
        if(l2!=NULL)
        {
            value2=l2->val;
            l2=l2->next;
        }
        int num=value1+value2+cur;
        cur=num/10;
        l3->next=new ListNode(num%10);
        l3=l3->next;
    }
    if(cur!=0)
        l3->next=new ListNode(cur);
        return l4->next;
    }
};
