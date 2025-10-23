// Last updated: 24/10/2025, 02:32:13
class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int end=arr.size()-1,start=0;
        vector<int>ans;
        while(start<end)
        {
            if(arr[start]+arr[end]==target)
            {
                ans.push_back(start+1);
                ans.push_back(end+1);
                return ans;
            }
            else if(arr[start]+arr[end]<target)
            start++;
            else 
            end--;

        }
        return ans;

        
    }
};