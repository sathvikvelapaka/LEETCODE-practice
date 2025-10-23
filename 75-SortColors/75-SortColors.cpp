// Last updated: 24/10/2025, 02:32:22
class Solution {
public:
    void sortColors(vector<int>& arr) {
        int zerocount=0;
        int onecount=0;
        int twocount=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==0)
            zerocount++;

            if(arr[i]==1)
            onecount++;

            if(arr[i]==2)
            twocount++;

        }
        int n=arr.size();
        
        arr.clear();

        for(int i=0;i<zerocount;i++)
        {
            arr.push_back(0);
        }
         for(int i=0;i<onecount;i++)
        {
            arr.push_back(1);
        }
         for(int i=0;i<twocount;i++)
        {
            arr.push_back(2);
        }
        
    }
};