// Last updated: 24/10/2025, 02:31:59
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
    void deleteNode(ListNode* node) {

     node->val=node->next->val;
      node->next=node->next->next;
    }
};