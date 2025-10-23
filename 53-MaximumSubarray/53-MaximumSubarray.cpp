// Last updated: 24/10/2025, 02:32:31
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            sum=nums[i]+sum;
            maxi=max(sum,maxi);
            if(sum<0)
            {
                sum=0;
            }
        }
        return maxi;  
    }
};