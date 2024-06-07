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
        if(head == NULL)return NULL;
        if(head->next == NULL){
            if(head->val == val){
                return NULL;
            }else{
                 return head;
            }
           
        }
        ListNode* prev = head;
        
         ListNode* temp = head->next;
        while(temp->next != NULL ){
            if(temp->val == val){
                prev->next = temp->next;
                temp->next = NULL;
                temp = prev->next;
            }else{
                prev = prev->next;
                temp = temp->next;
            }
        }
        
        if(head->val == val){
            ListNode* ptr = head;
            head = head->next;
            ptr->next = NULL;
            delete(ptr);
        }
        prev = head;
        if(prev->next == NULL){
            if(prev->val == val){
                return NULL;
            }
            return head;
        }
       while(prev->next->next != NULL){
        prev = prev->next;
       }
        if(temp->val == val){
            prev->next = NULL;
            delete(temp);
        }
        return head;
    }
};