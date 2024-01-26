class Solution {
public:
    int minOperations(vector<string>& logs) {
        if(logs.size()==0)
            return 0;
        stack<string>s;
        for(auto x:logs)
        {
            if(x[0]!='.')
                s.push(x);
            else if(x=="../")
            {
                if(!s.empty())
                    s.pop();
                else
                    continue;
            }

        }
        return s.size();
    }
};