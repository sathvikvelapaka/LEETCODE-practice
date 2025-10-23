// Last updated: 24/10/2025, 02:32:47
class Solution {
public:
    int maxArea(vector<int>& arr) 
    {
       int n=arr.size();
       int start=0;
       int end=n-1;
       int lopala_max=0;
       int maxi=0;
       
       while(start<end)
       {
        n=end-start;
        
        if(arr[start]<arr[end])
        {
            lopala_max=arr[start]*n;
            maxi=max(lopala_max,maxi);
            start++;
        }
        else if(arr[start]>arr[end])
        {
            lopala_max=arr[end]*n;
            maxi=max(lopala_max,maxi);
            end--;
        }
        else if(arr[start]==arr[end])
        {
            lopala_max=arr[start]*n;
            maxi=max(lopala_max,maxi);
            start++;
            end--;
        }
        
       }
       return maxi;
    }
};