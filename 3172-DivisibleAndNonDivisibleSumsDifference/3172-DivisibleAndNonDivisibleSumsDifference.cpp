// Last updated: 24/10/2025, 02:30:41
class Solution {
public:
    int differenceOfSums(int n, int m) {
        int sum1=0,sum2=0;
        for(int i=1;i<=n;i++)
        {
            if(i%m==0)
            {
                sum1=sum1+i;
            }
            else
            {
                sum2=sum2+i;
            }
        }
        return sum2-sum1;
    }
};