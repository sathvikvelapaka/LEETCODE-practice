// Last updated: 24/10/2025, 02:30:34
class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                nums[i]=0;
            }
            else
            {
                nums[i]=1;
            }
        }
        sort(nums.begin(),nums.end());
        return nums;
        
    }
};