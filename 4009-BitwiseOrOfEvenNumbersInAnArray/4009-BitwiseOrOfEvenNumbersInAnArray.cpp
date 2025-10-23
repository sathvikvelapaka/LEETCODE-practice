// Last updated: 24/10/2025, 02:30:21
class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& arr) {
        int ans=0;
        for(int i=0;i<arr.size();i++)
            {
                if(arr[i]%2==0)
                {
                    ans=ans|arr[i]; 
                }

            }
        return ans;
        
    }
};