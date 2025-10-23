// Last updated: 24/10/2025, 02:32:26
class Solution {
public:
    int climbStairs(int n) {
        if(n<3)
        {
            return n;
        }
        vector<int>ans(n+1);
        
        ans[0]=1;
        ans[1]=2;
        for(int i=2;i<n;i++)
        {
            ans[i]=ans[i-1]+ans[i-2];     
        }
        return ans[n-1];
    }
};