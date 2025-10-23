// Last updated: 24/10/2025, 02:30:28
class Solution {
public:
    int gcd(int a,int b)
    {
        if(a==0)
            return b;
        if(b==0)
            return a;
        else
        {
           return  gcd(b,a%b);
        }
    }
    int gcdOfOddEvenSums(int n) {
        int sumodd=n*n;
        int evenodd=n*(n-1);
        return gcd(sumodd,evenodd);
        
        
    }
};