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
        // Create a dummy node that points to the head of the list
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        
        // Use two pointers: prev and curr
        ListNode* prev = dummy;
        ListNode* curr = head;
        
        while (curr != nullptr) {
            if (curr->val == val) {
                // Skip the current node
                prev->next = curr->next;
                delete curr;
            } else {
                // Move the prev pointer
                prev = curr;
            }
            // Move to the next node
            curr = prev->next;
        }
        
        // Store the new head and delete the dummy node
        ListNode* newHead = dummy->next;
        delete dummy;
        
        return newHead;
    }
};
