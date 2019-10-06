// https://leetcode.com/problems/next-greater-node-in-linked-list/
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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> a,stack;
        for(ListNode* p=head;p!=nullptr;p=p->next)
            a.push_back(p->val);
        for(int i=a.size()-1;i>=0;i--)
        {
            auto val=a[i];
        while(!stack.empty() && stack.back()<=a[i])
        {
            stack.pop_back(); // удаляем последний если он меньше.    
        }
            if(stack.empty())
            a[i]=0;
                else
                    a[i]=stack.back();
            stack.push_back(val);
        }
        return a;
    }
};
