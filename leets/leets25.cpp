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
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head; 
        int cnt = 0;
        while(temp != nullptr && cnt != k){
            temp = temp->next;
            cnt++;
        }

        
        if(cnt == k){
             ListNode* reversedHead = reverseKGroup(temp, k);
             while (cnt > 0) {
               ListNode* SaveNext = head->next; 

               head->next = reversedHead; 
               reversedHead = head; 

                head = SaveNext; 
                cnt--;
            }
            head = reversedHead;
        }
        return head;
    }
};