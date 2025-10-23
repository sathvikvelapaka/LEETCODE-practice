// Last updated: 24/10/2025, 02:32:35
class Solution {
public:
    void transpose(vector<vector<int>>& matrix)
    {
        int n=matrix.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<=i;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }
    void rotate(vector<vector<int>>& matrix) 
    {
        int n=matrix.size();
        transpose(matrix);
        for(int i=0;i<n;i++)
        {
            int start=0;
            int end=n-1;
            while(start<end)
            {
                swap(matrix[i][start],matrix[i][end]);
                start++;
                end--;
            }

        }
    }
};