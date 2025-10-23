// Last updated: 24/10/2025, 02:31:28
class Solution {
public:
    bool isMonotonic(vector<int>& arr) {
        //increse
        bool flag=true;
        bool flag1=true;
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i]>arr[i+1])
                flag=false;
        }
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i]<arr[i+1])
            flag1=false;

        }
        if(flag==true)
        return flag;
        else if(flag1==true)
        return flag1;
        else 
        return false;

    }
};