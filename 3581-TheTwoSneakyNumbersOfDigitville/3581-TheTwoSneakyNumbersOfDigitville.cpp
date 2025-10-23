// Last updated: 24/10/2025, 02:30:35
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        // int n=nums.size();
        // vector<int>freq(n);
        vector<int>ans;
        // for(int i=0;i<nums.size();i++)
        // {
        //     freq[nums[i]]++;
        //     if(freq[i]>1)
        //     {
        //         ans.push_back(freq[i]);
        //     }
        // }
        // return ans;  
        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                ans.push_back(nums[i]);
            }

        }
        return ans;
    }
};