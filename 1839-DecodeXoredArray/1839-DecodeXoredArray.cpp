// Last updated: 25/10/2025, 23:08:21
class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int>ans;
        ans.push_back(first);
        for(int i=0;i<encoded.size();i++)
        {
            ans.push_back(encoded[i]^ans[i]);
        }
        return ans;
    }
};