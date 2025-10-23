// Last updated: 24/10/2025, 02:30:50
int alternateDigitSum(int n) {
    int sum=0;
    int count;
    while(n)
    {
    int rem=n%10;
    n=n/10;
     count++;
    if(count%2==0)
    {
        count=-1;
    }
    else count=1;
    sum=sum*count+rem;
    }
    return sum;
       
}