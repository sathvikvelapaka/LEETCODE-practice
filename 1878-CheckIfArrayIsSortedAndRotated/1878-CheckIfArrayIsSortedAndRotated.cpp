// Last updated: 24/10/2025, 02:31:12
class Solution {
public:
    bool check(vector<int>& arr) {
        int index=0;
        bool ans=true;
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                index=i+1;
                break;
            }
        }
        for(int i=index;i<arr.size()-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                ans=false;
                break;
            }
        }

        if (index > 0 && arr.back() > arr[0]) {
            ans = false;
        }
        return ans;
        // int k=arr.size()-index;
        // vector<int>temp(arr.size());
        // for(int i=0;i<arr.size();i++)
        // {
        //     temp[(i+k)%arr.size()]=arr[i];
        // }
        // arr=temp;
        // for(int i=0;i<arr.size()-1;i++)
        // {
        //     if(arr[i]>arr[i+1])
        //     {
        //        ans=false;
        //     }
        // }
        // return ans;
    }
};