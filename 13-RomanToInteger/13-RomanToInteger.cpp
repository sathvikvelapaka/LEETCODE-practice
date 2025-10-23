// Last updated: 24/10/2025, 02:32:45
class Solution {
public:
    int romanToInt(string s) {
      
        int sum=0;
         unordered_map<char,int>map{{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
         int prev=0;
        for(int i=s.size()-1;i>=0;i--)
        {
           int current= map[s[i]];
             if(current<prev)
             {
                sum=sum-current;
             }
             else
             {
                sum=sum+current;
             }
             prev=current;
            

        }
        return sum;
        
    }
};