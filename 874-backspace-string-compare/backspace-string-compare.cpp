class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        stack<char> s1;

        for(auto ch:s)
        {
            if(ch!='#')
                st.push(ch);
            else{
                if(!st.empty())
                    st.pop();
            }
                
        }

        for(auto ch:t)
        {
            if(ch!='#')
                s1.push(ch);
            else{
                if(!s1.empty())
                    s1.pop();
            }
                
        }
        if(s1.size()!=st.size())
            return false;
        while(!st.empty())
        {
            if(st.top()!=s1.top())
                return false;
            st.pop();
            s1.pop();
        }

        return true;
    }
};