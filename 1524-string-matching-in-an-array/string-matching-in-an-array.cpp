class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string>s;
        for(int i=0;i<words.size();i++)
        {
            for(int j=0;j<words.size();j++)
            {
                if(words[i]!=words[j] && words[j].find(words[i])!=-1){
                    s.push_back(words[i]);
                    break;
                }
            }
        }
        return s;
    }
};