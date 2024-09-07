class Solution {
public:
    int pivotInteger(int n) {
         int totalsum=0,leftsum=0;
        for(int i=1;i<=n;i++)
        {
            totalsum+=i;
        }
        for(int i=1;i<=n;i++)
        {
            int right=totalsum-leftsum-i;
            if(right==leftsum)
                return i;
            leftsum+=i;

        }
        return -1;
    }
};