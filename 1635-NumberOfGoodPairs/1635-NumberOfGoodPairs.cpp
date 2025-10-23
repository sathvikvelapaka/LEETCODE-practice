// Last updated: 24/10/2025, 02:31:15
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i; j < nums.size(); j++) {
                if(i<j)
                {
                    if (nums[i] == nums[j]) {
                    count++;
                }

                }
                
            }
        }
        return count;
    }
};