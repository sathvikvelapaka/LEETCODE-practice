// Last updated: 25/10/2025, 23:08:24
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
       
        int n=s.size();
        string ans=s;
        for(int i=0;i<n;i++)
        {
            ans[indices[i]]=s[i];
        }
        return ans;
        
    }
};