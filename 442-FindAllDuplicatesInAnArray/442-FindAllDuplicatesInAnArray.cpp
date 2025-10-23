// Last updated: 24/10/2025, 02:31:44
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>freqarr(n+1,0);
        for(int i=0;i<n;i++)
        {
            freqarr[nums[i]]++;
        }
        vector<int>result;


        for(int i=1;i<=n;i++)
        {
            if(freqarr[i]>1)
            {
                result.push_back(i);
            }
        }
        return  result;
   
    }
};