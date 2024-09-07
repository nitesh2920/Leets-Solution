class Solution {
public:
    int firstUniqChar(string s) {
        // unordered_map<char,int> map;

        // for(auto it:s)
        //     map[it]++;

        // for(int i=0;i<s.size();i++)
        // {
        //     if(map[s[i]]==1)
        //         return i;
        // }
        // return -1;
    int charArr[128]={};
    for(char c:s){
        charArr[c]++;
    }

    for(int i=0;i<s.size();i++)
    {
        if(charArr[s[i]]==1)
            return i;
    }
    return -1;

    }
};