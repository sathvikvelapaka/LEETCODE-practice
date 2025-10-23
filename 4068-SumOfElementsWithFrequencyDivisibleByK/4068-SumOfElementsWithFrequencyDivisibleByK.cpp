// Last updated: 24/10/2025, 02:30:25
class Solution {
public:
    int sumDivisibleByK(vector<int>& arr, int k) 
    {
        vector<int>freq(1001,0);
        for(int i=0;i<arr.size();i++)
        {
            freq[arr[i]]++;
        }
        int sum=0;

        // sort(freq.begin(),freq.end());

        for(int i=0;i<freq.size();i++)
        {
            if((freq[i]%k==0)&&(freq[i]!=0))
            {
                sum=sum+freq[i]*i; 
            }     
        }
        return sum;
        
    }
};