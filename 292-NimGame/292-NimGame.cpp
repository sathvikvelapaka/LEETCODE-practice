// Last updated: 24/10/2025, 02:31:51
class Solution {
public:
    bool canWinNim(int n) {
        if(n<0)
        return 0;
        if(n%4==0)
        return 0;
        else return 1;   
    }
};