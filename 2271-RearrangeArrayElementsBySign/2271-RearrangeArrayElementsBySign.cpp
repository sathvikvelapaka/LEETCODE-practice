// Last updated: 24/10/2025, 02:31:03
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>positive;
        vector<int>neg;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                positive.push_back(nums[i]);
            }
            else
            {
                neg.push_back(nums[i]);

            }
        }
        vector<int>ans;
        for(int i=0;i<nums.size()/2;i++)
        {
            ans.push_back(positive[i]);
             ans.push_back(neg[i]);
        }
        return ans;

        
    }
};