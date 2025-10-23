// Last updated: 24/10/2025, 02:31:43
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& arr) {

        int n=arr.size();
        vector<int>freqarr(n+1,0);
        for(int i=0;i<n;i++)
        {
            freqarr[arr[i]]++;
        }
       
     
      
        vector<int>ans;
        for(int i=1;i<=n;i++)
        {
            if(freqarr[i]==0)
            {
                ans.push_back(i);
            }
        }
        return ans;
        
    }
};