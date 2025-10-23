// Last updated: 24/10/2025, 02:31:45
class Solution {
public:
    int thirdMax(vector<int>& arr) {
        long long first = LLONG_MIN, second = LLONG_MIN, third = LLONG_MIN;

        int n = arr.size();

        // Step 1: Traverse the array and find the three distinct maximums
        for (int i = 0; i < n; i++) {
            // Skip duplicates
            if (arr[i] == first || arr[i] == second || arr[i] == third) {
                continue;
            }

            // Update the maximums
            if (arr[i] > first) {
                third = second;
                second = first;
                first = arr[i];
            } else if (arr[i] > second) {
                third = second;
                second = arr[i];
            } else if (arr[i] > third) {
                third = arr[i];
            }
        }

        // Step 2: If we don't have a third distinct maximum, return the first maximum
        return third == LLONG_MIN ? first : third;
    }
};