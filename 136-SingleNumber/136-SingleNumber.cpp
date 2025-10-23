// Last updated: 24/10/2025, 02:32:17
class Solution {
public:
    int singleNumber(vector<int>& arr) {
        int r=0;
        for(int i=0;i<arr.size();i++){
            r=r^arr[i];
        }
        return r;   
    }
};