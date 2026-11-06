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
    ListNode* deleteDuplicates(ListNode* head) {
        // Base case: if list is empty or has only one element
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        
        ListNode* curr = head;
        
        while (curr != nullptr && curr->next != nullptr) {
            // If duplicate found, adjust pointer to skip the next node
            if (curr->val == curr->next->val) {
                ListNode* duplicate = curr->next;
                curr->next = curr->next->next;
                delete duplicate; // Free memory to avoid leaks
            } else {
                // Only move pointer forward if no duplicate was found
                curr = curr->next;
            }
        }
        
        return head;
    }
};
