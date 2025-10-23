// Last updated: 24/10/2025, 02:31:14
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum=0;
        int maxsum=0;
        for(int i=0;i<accounts.size();i++)
        {
            for(int j=0;j<accounts[0].size();j++)
            {
                sum=sum+accounts[i][j];
            }
            maxsum=max(maxsum,sum);
            sum=0;

        }
        return maxsum;
        
    }
};