// Last updated: 24/10/2025, 02:32:30
class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        int n=s.size();
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]==' ')
            {
               if(count==0)
               {
                continue;
               }
               else
               {
                 break;
               }
                
            }
            else
            {
                count++;
            }
        }
        return count;
        
    }
};