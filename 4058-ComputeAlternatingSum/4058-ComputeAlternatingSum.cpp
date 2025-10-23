// Last updated: 24/10/2025, 02:30:23
class Solution {
public:
    int alternatingSum(vector<int>& arr) {
        int sum1=0;
        int sum2=0;
        for(int i=0;i<arr.size();i++)
        {
            if(i%2==0)
            {
                sum1=sum1+arr[i];
            }
            else
            {
                sum2=sum2+arr[i];
            }
                
        }
        return sum1-sum2;
        
    }
};