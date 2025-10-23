// Last updated: 24/10/2025, 02:32:10
class Solution {
public:
    
    int trailingZeroes(int n) {
        int a=0;
        while(n>0){
            a=a+n/5;
            n=n/5;
        }
        return a;    
    }
};