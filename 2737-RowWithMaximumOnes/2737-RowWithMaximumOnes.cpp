// Last updated: 24/10/2025, 02:30:47
class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) 
    {
        int rows=mat.size();
        int cols=mat[0].size();
        int onecount=0;
        int maxi=INT_MIN;
        int row1,col1;
        int maxone=0;

        for(int i=0;i<rows;i++)
        {
            onecount=0;
            for(int j=0;j<cols;j++)
            {
                if(mat[i][j]==1)
                {
                    onecount++;
                }
                if(onecount>maxi)
                {
                    maxone=max(maxone,onecount);
                    maxi=onecount;
                    row1=i;
                    col1=j;
                }
            }
        }
        vector<int>ans;
        ans.push_back(row1);
        ans.push_back(maxone);
        return  ans;
        
    }
};