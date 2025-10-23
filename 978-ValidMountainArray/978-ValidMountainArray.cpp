// Last updated: 24/10/2025, 02:31:27

class Solution {
public:
    bool validMountainArray(vector<int>& arr) 
    {
        int n = arr.size(); 
        // A mountain array must have at least 3 elements
        if (n < 3) {
            return false;
        }
        int i = 0;
        // Walk up
        while (i + 1 < n && arr[i] < arr[i + 1]) {
            i++;
        }
        // Peak can't be the first or last element
        if (i == 0 || i == n - 1) {
            return false;
        } 
        // Walk down
        while (i + 1 < n && arr[i] > arr[i + 1]) {
            i++;
        }
        // Check if we reached the end
        return i == n - 1;
    }
};