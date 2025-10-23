// Last updated: 24/10/2025, 02:31:33
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& matrix) 
    {
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[i][j]=1;
                }
                else
                {
                    matrix[i][j]=0;
                }
            }
        }
        for(int i=0;i<matrix.size();i++)
        {
            int start=0;
            int end=matrix[i].size()-1;
            while(start<end)
            {
                swap(matrix[i][start],matrix[i][end]);
               
                start++;
                 end--;
            }
           
        }
        return matrix;
    }
};