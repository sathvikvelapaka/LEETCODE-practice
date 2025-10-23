// Last updated: 24/10/2025, 02:31:57
int addDigits(int num) 
{
   
    while(num>9)
    { 
        int sum=0;
    while(num!=0)
    {
        int rem=num%10;
        num=num/10;
        sum += rem;
    }
    num=sum;
    }
 return num;   
}