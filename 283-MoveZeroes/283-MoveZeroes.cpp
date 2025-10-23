// Last updated: 24/10/2025, 02:31:52
class Solution {
public:
    void moveZeroes(vector<int>& arr) 
    {
        int n=arr.size();
        int position =0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=0)
            {
                arr[position]=arr[i];
                position++;
            }
        }
        for(int i=position;i<n;i++)
        {
            arr[i]=0;
        }
    }
};