// Last updated: 24/10/2025, 02:31:23
class Solution {
public:
    string defangIPaddr(string address) {
        int index=0;
        string s="";
        while(index<address.size())
        {
            if(address[index]=='.')
            {
                s=s+"[.]";
            }
            else
            {
                s=s+address[index];
            }
            index++;
        }
        return s;
        
    }
};