// Last updated: 24/10/2025, 02:31:39
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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode*temp=head;
        int count=0;
         int orginal;
        while(temp!=NULL)
        {
            count++;
            if(count==k)
            {
                orginal=temp->val;
            }
            temp=temp->next;
        }
        int another=count-k+1;
        count=0;
        int anothervalue;
        temp=head;
        
        while(temp!=NULL)
        {
            count++;
            
            if(count==another)
            {
               anothervalue=temp->val;
            }
            temp=temp->next;
        }
        count=0;
        temp=head;

         while(temp!=NULL)
        {
            count++;
            if(count==k)
            {
                temp->val=anothervalue;
            }
            
            if(count==another)
            {
              temp->val=orginal;
            }
            temp=temp->next;
        }

       

        return head;
    }
};