// Last updated: 24/10/2025, 02:32:44
class Solution {
public:
    bool isValid(string s) {
        stack<int>stack;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='('||s[i]=='['||s[i]=='{')
            {
                stack.push(s[i]);
            }
            else
            {
                if(stack.empty())
                {
                    return false;
                }
                char top=stack.top();
                stack.pop();
                if(s[i]==')' && top!='(')
                {
                    return false;
                } 
                if(s[i]=='}'&&top!='{')
                {
                    return false;
                }

                if(s[i]==']'&&top!='[')
                {
                    return false;
                }
            }
        }
        return stack.empty();

    }
};