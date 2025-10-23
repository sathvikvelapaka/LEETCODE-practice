// Last updated: 24/10/2025, 02:31:21
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
    int getDecimalValue(ListNode* head) {
        int num=0;
        vector<int>arr;
        ListNode*temp=head;
        while(temp!=NULL)
        {
            arr.push_back(temp->val);
            temp=temp->next;
        }
        int ans=0;
        int count=0;

        for(int i=arr.size()-1;i>=0;i--)
        {
            ans=ans+(arr[i]*pow(2,count));
             count++;
        }
        return ans;
        
    }
};