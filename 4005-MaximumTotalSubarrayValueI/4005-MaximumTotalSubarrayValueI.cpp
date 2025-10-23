// Last updated: 24/10/2025, 02:30:27
class Solution {
public:
    long long maxTotalValue(vector<int>& arr, int k) {
        long long maxi=INT_MIN;
        long long min=INT_MAX;
        for(long long i=0;i<arr.size();i++)
            {
                if(arr[i]>maxi)
                {
                    maxi=arr[i];
                }
                if(arr[i]<min)
                {
                    min=arr[i];
                }
            }
        long long ans=maxi-min;
        return ans*k;
        
    }
};