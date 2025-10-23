// Last updated: 24/10/2025, 02:32:18
class Solution {
public:
    int maxProfit(vector<int>& arr) {
       int prices=0;
       for(int i=0;i<arr.size()-1;i++)
       {
          if(arr[i]<arr[i+1])
          {
            int profit=arr[i+1]-arr[i];
            prices=prices+profit;

          }
       }
       return prices;
        
    }
};