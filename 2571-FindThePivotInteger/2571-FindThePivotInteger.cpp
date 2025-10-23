// Last updated: 24/10/2025, 02:30:54
class Solution {
public:
    int pivotInteger(int n) 
    {
        int totalsum=0;
        int ans=-1;
        int leftsum=0;

         totalsum=n*(n+1)/2;

         for(int i=1;i<=n;i++)
         {
            leftsum=leftsum+i;
            int rightsum=totalsum-leftsum+i;
            if(leftsum==rightsum)
            {
                return i;
            }

         }
         return -1;
         
       
    }
};