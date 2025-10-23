// Last updated: 24/10/2025, 02:30:51
class Solution {
public:
    int differenceOfSum(vector<int>& arr) 
    {
        //TOATAL SUM
        int totalsum=0;
        for(int i=0;i<arr.size();i++)
            totalsum+=arr[i];
        
        //elentsum
        int sum=0;
        for(int i=0;i<arr.size();i++)
        {
            int num=arr[i];
                while(num>0)
                {
                    sum=sum+num%10;
                    num=num/10;
                }
        }
        int ans=totalsum-sum;

        if(ans<0)
        return -1*ans;

        else
        return ans;     
    }
};