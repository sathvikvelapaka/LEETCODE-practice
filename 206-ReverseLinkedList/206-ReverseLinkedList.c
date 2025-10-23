// Last updated: 24/10/2025, 02:32:08
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) 
{
   
    struct ListNode *current=head;
    struct ListNode *prev=NULL;
    struct ListNode *next;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
      current=next;

    }
    return prev;
}