// Last updated: 24/10/2025, 02:32:05
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

         
        while (head != NULL && head->val == val) 
        {
            head = head->next;
        }
        if (head == NULL) return NULL;

        ListNode*prev=head;
        ListNode*current=head->next;
       
        while(current!=NULL)
        {
            if(current->val==val)
            {
                prev->next=current->next;
            }
            else
            {
                prev=current;
            }
           
            current=current->next;
        }
        return head;
    }
};