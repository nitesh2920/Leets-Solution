class Solution {
public:
    void solve(string digits,string output,int i,vector<string>&ans,string mapping[])
    {
        if(i>=digits.size()){
            ans.push_back(output);
            return;
        }
        int num=digits[i]-'0';
        string val=mapping[num];

        for(int it=0;it<val.size();it++)
        {
            output.push_back(val[it]);
            solve(digits,output,i+1,ans,mapping);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        string output="";
        if(digits.length()<=0)
            return ans;
        int index=0;
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

        solve(digits,output,index,ans,mapping);
        return ans;
    }

};