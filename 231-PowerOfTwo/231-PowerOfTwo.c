// Last updated: 24/10/2025, 02:32:02
bool isPowerOfTwo(int n) {
    if(n<1)
    return 0;
     while(n!=1)
     {
        int rem=n%2;
        if(n%2==1)
        return 0;
        n=n/2; 
     }
     return 1;
}