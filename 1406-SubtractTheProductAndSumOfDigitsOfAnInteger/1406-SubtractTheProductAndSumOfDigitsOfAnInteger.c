// Last updated: 24/10/2025, 02:31:22
int subtractProductAndSum(int n) {
      int mul=1;
    int sub=0;
    while(n!=0)
    {
    int rem=n%10;
    n=n/10;
    mul=rem*mul;
    sub=sub+rem;
    }
    return mul-sub; 
}