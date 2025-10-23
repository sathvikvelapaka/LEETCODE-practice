// Last updated: 24/10/2025, 02:32:43
class Solution {
public:
    int removeDuplicates(vector<int>&arr) {
        int n=arr.size();
        if(n==0)
        {
            return 0;
        }
        int count=1;
       
        for(int i=1;i<n;i++)
        {
            if(arr[i-1]!=arr[i])
            {
                arr[count]=arr[i];
                count++;
            }
        }
        return count;
        
    }
};