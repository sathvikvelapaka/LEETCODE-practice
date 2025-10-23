// Last updated: 24/10/2025, 02:31:49
class Solution {
public:
    bool isPowerOfThree(int n) {
        int ans=0;
        for(int x=0;x<30;x++)
        if(n==pow(3,x))
        ans=1;

        return ans;   
    }
};