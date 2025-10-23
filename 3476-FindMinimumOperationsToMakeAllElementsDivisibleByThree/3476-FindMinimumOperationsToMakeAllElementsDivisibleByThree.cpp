// Last updated: 24/10/2025, 02:30:36
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            // if(nums[i]==1)
            // {
            //     count=count+1;     
            // }
            if(nums[i]%3!=0)
            {
                count++;
            }
            
        }
        return count;
    }
};