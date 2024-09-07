class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int res=0;
        int n=arr.size();
        for(int i=0;i<n;i++)
            res=res^arr[i];
        for(int i=1;i<=n;i++)
            res=res^i;
        return res;      
    }
};