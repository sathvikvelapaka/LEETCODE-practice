// Last updated: 24/10/2025, 02:31:08
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        for(int i=0;i<nums.size();i++)
        {
            ans[i]=nums[nums[i]];
        }
        return ans;
        
    }
};