class Solution {
public:
    string largestOddNumber(string s) {
     if(s.back()%2==1)
        return s;
    int right=s.size()-1;
    while(right>=0)
    {
        int n=s[right];
        if(n%2==1)
            return s.substr(0,right+1);
        right--;
    }
    return "";
       
    }
};