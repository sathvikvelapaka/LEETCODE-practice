// Last updated: 24/10/2025, 02:32:11
class Solution {
public:
    int majorityElement(vector<int>& arr) 
    {
        int n=arr.size();
        sort(arr.begin(),arr.end());
       return arr[n/2];
    }
        
    
};