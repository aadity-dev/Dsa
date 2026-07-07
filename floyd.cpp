#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    void removeCycle(ListNode *head) {
        if (!head || !head->next) return;

        ListNode *slow = head;
        ListNode *fast = head;
        bool hasCycle = false;

        // Phase 1: Detect cycle
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                hasCycle = true;
                break;
            }
        }

        
        // If no cycle exists, just exit
        if (!hasCycle) return;

        // Phase 2: Find the cycle start node
        slow = head;
        
        // Special case: If cycle starts at the head node itself
        if (slow == fast) {
            while (fast->next != slow) {
                fast = fast->next;
            }
            fast->next = nullptr; // Break the cycle
            return;
        }

        // Standard case: Keep track of the node just behind fast
        while (slow->next != fast->next) {
            slow = slow->next;
            fast = fast->next;
        }

        // fast->next is now pointing to the start of the loop
        fast->next = nullptr; // Break the cycle
    }
};
