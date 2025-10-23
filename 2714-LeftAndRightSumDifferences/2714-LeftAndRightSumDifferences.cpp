// Last updated: 24/10/2025, 02:30:49
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& arr) 
    {
        int n=arr.size();
        vector<int>prefix(n);
        prefix[0]=0;
        for(int i=1;i<arr.size();i++)
        {
            prefix[i]=prefix[i-1]+arr[i-1];
        }
        vector<int>suffix(n);
        suffix[n-1]=0;

        for(int i=n-2;i>=0;i--)
        {
            suffix[i]=suffix[i+1]+arr[i+1];
        }
         vector<int>ans(n);
        for(int i=0;i<arr.size();i++)
        {
            ans[i]=abs(prefix[i]-suffix[i]);
        }
        return ans;
    }
};