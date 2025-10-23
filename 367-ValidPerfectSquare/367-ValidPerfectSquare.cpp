// Last updated: 24/10/2025, 02:31:48
class Solution {
public:
    bool isPerfectSquare(int num) {
      
        if(num<2)return true;
          int start=2;
        int end=num/2;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            long long square = static_cast<long long>(mid) * mid;
            if(square==num)
            return true;
            if(square<num)
            start=mid+1;
            else
            end=mid-1;
        }
        return false;   
    }
};