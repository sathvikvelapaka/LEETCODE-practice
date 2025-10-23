// Last updated: 24/10/2025, 02:32:39
class Solution {
public:
    int search(vector<int>& arr, int target)
     {
        int start=0,end=arr.size()-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(arr[mid]==target)
            return mid;

            else if(arr[mid]>=arr[0])
            {
            if(arr[mid]>target&&arr[start]<=target)
            end=mid-1;
            else
            start=mid+1;
           }
           else
           {
            if(arr[mid]<target&&arr[end]>=target)
            start=mid+1;
            else
            end=mid-1;
           }
        
        }
         return -1;   
    }   
};