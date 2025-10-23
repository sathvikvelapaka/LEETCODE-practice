// Last updated: 24/10/2025, 02:31:53
class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=i)
            {
               return i;
            }
        }
        return nums.size();
        
    }
};