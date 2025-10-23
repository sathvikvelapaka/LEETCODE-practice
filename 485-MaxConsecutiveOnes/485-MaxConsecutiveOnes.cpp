// Last updated: 24/10/2025, 02:31:42
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int count=0,maxcount=0;
        for(int i=0;i<arr.size();i++){
        if(arr[i]==1) {
            count++;
            maxcount=max(maxcount,count);
        }
        if(arr[i]==0)
            count=0;
        }
        return maxcount;   
    }
};