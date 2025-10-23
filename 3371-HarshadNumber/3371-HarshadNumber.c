// Last updated: 24/10/2025, 02:30:39
int sumOfTheDigitsOfHarshadNumber(int x) {
    int num=x;
    int sum=0,rem;
    while(x>0)
    {
        rem=x%10;
        sum=sum+rem;
        x=x/10;
    }
    if(num%sum==0)
    {
        return sum;
    }
    else 
    return -1;
    

    
}