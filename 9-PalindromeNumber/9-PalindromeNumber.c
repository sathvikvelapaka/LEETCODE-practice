// Last updated: 24/10/2025, 02:32:48
bool isPalindrome(int x) 
{

        int rem,ans=0;
        if(x<0)
        return 0;

        int num=x;
        while(num)
        {
            rem=num%10;
            num=num/10;
            if(ans>INT_MAX/10)
            {
                return 0;
            }
            ans=ans*10+rem;
        } 
        if(ans==x)
        return 1;
        else 
        return 0;
    
    
}
