class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int len=s1.length();
        len=min(len,(int)s2.length());
        len=min(len,(int)s3.length());

        int sum=s1.length()+s2.length()+s3.length();
        if(s1[0]!=s2[0] or s1[0]!=s3[0] or s2[0]!=s3[0])
            return -1;

        for(int i=0;i<len;i++)
        {
            if(s1[i]==s2[i] and s2[i]==s3[i])
                sum-=3;
            else
                break;
        }

        return sum;
    }
};