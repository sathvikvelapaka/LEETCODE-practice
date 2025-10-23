// Last updated: 24/10/2025, 02:30:29
class Solution {
public:
    bool checkDivisibility(int n) 
    {
        int number = n;
        int sum = 0, prod = 1, rem;

        while (n > 0)
        {
            rem = n % 10;
            sum += rem;
            prod *= rem;
            n /= 10;
        }

        int total = sum + prod;

        // avoid division by zero if product is zero and sum is zero (unlikely since input >= 1)
        if (total == 0)
            return false;

        return number % total == 0;
    }
};