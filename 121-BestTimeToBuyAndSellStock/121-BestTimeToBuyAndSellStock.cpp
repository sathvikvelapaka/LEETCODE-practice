// Last updated: 24/10/2025, 02:32:19
class Solution {
public:
    int maxProfit(vector<int>& arr) {
      int minprice=arr[0];
      int maxiprofit=0;
      for(int i=1;i<arr.size();i++)
      {
        if(arr[i]<minprice)
        {
            minprice=arr[i];
        }
        

        int profit=arr[i]-minprice;
        if(profit>maxiprofit)
        {
            maxiprofit=profit;
        }
        
      }
      return maxiprofit;
    }
};