// Last updated: 24/10/2025, 02:31:40
class Solution {
public:
    bool checkPerfectNumber(int num) 
    {
        int sum=0;
        for(int i=1;i<num;i++)
        {
            if(num%i==0)
            sum+=i;

    
        }
        if(sum==num)
        return 1;
        else 
        return 0;
        
    }
};