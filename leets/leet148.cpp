/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode* sortList(ListNode* head) 
    {
        if (!head || !head->next) return head;
        bool swapped;
        do
        {
            swapped = false;
            ListNode* temp = head;
            while(temp ->next)
            {
               if(temp->val > temp->next->val)
               {
                    swap(temp->val,temp->next->val);
                    swapped = true;
               }
               temp = temp->next; 
            }
        }
        while(swapped);
        return head;
    }  
};
