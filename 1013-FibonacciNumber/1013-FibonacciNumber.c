// Last updated: 24/10/2025, 02:31:26


int fib(int n){
if(n==0)
{
    return 0;
}
if(n==1)
{
    return 1;
}
else
{
    return fib(n-1)+fib(n-2);
}
}