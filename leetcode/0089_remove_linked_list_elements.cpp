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
    ListNode* removeElements(ListNode* head, int val) {
        // Create a dummy node on the stack pointing to head
        ListNode dummy(0, head);
        ListNode* curr = &dummy;

        while (curr->next != nullptr) {
            if (curr->next->val == val) {
                ListNode* toDelete = curr->next;
                curr->next = curr->next->next; // Bypass the matching node
                delete toDelete;               // Free memory
            } else {
                curr = curr->next;             // Advance only if no deletion occurred
            }
        }

        return dummy.next;
    }
};