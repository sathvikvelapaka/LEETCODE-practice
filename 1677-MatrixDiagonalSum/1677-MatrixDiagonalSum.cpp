// Last updated: 25/10/2025, 23:08:23
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int leftsum=0;
        int rightsum=0;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat.size();j++)
            {
                if(i==j)
                {
                    leftsum=leftsum+mat[i][j];
                }

            }
           
        }
        int n=mat.size();
        for(int i=0;i<mat.size();i++)
        {
           
                rightsum=rightsum+mat[i][n-1-i];
           
        }
        int totalsum=leftsum+rightsum;
        int mid=n/2;
        if(n%2!=0)
        {
            totalsum=totalsum-mat[mid][mid];
        }
        return totalsum;
        
    }
};