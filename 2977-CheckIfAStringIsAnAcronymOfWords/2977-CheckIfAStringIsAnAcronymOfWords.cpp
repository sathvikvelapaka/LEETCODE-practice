// Last updated: 24/10/2025, 02:30:42
class Solution {
public:
    bool isAcronym(vector<string>& arr, string word) 
    {
        if(arr.size()!=word.size())
        {
            return false;
        }
       for(int i=0;i<arr.size();i++)
       {
        string s=arr[i];
        int count=0;
        if(s[0]!=word[i])
        {
            return false;
        }
       }

       return true;
        
    }
};