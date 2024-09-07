class Solution {
public:
    int strStr(string haystack, string needle) {
        int ans=1;
        ans=haystack.find(needle,0);
        return ans;
    }
};