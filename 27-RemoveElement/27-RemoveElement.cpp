// Last updated: 24/10/2025, 02:32:42
class Solution {
public:
    int removeElement(vector<int>& arr, int val) {
        int i,j=0;
        for(i=0;i<arr.size();i++)
        {
            if(arr[i]!=val)
            arr[j++]=arr[i];
        }
        return j;
        
    }
};