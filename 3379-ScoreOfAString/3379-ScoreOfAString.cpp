// Last updated: 24/10/2025, 02:30:37
class Solution {
public:
    int scoreOfString(string s) 
    {
        int subsum=0;
        int sum=0;
        for(int i=0;i<s.size()-1;i++)
        {
            subsum=(int)s[i]-(int)s[i+1];
            subsum=abs(subsum);
            sum=sum+subsum;
        }
        return sum;
    }
};