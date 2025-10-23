// Last updated: 24/10/2025, 02:31:07
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        n=n+n;

        vector<int>ans;

        for(int i=0;i<nums.size();i++)
        {
            ans.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++)
        {
            ans.push_back(nums[i]);
        }
        return ans;

        
    }
};