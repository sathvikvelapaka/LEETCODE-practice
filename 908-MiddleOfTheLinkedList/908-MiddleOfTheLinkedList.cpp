// Last updated: 24/10/2025, 02:31:29
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
    ListNode* middleNode(ListNode* head) {
       int count=0;
        int mid=0;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        mid=count/2+1;
        temp=head;
          count=1;
        while(temp!=NULL)
        {
           
           if(count==mid)
           {
            return temp;
           }
            count++;
           temp=temp->next;
        }
        return head;
        

        
    }
};