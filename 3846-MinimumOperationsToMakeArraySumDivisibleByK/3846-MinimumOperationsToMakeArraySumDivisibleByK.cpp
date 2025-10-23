// Last updated: 24/10/2025, 02:30:31
class Solution {
public:
    int minOperations(vector<int>& nums, int k) 
    {
        int totalsum=0;
        for(int i=0;i<nums.size();i++)
        {
            totalsum+=nums[i];
        }
        int remain=totalsum%k;
        return remain;

    }
};