// Last updated: 24/10/2025, 02:32:01
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
    bool isPalindrome(ListNode* head) {
        vector<int>arr;

       ListNode*temp=head;

        for(temp=head;temp!=NULL;temp=temp->next)
        {
            arr.push_back(temp->val);
        }

        int start=0;
        int end=arr.size()-1;

        while(start<end)
        {
            if(arr[start]!=arr[end])
            {
                return false;
            }
            start++;
            end--;
        }

        return true;
        
        
    }
};