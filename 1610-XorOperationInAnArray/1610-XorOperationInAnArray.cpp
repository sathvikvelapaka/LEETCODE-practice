// Last updated: 24/10/2025, 02:31:17
class Solution {
public:
    int xorOperation(int n, int start) {
        int s=0;
        for(int i=0;i<n;i++)
            s^=start+2*i;
        return s;
    }
};