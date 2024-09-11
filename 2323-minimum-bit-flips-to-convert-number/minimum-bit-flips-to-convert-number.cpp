class Solution {
public:
    int minBitFlips(int start, int goal) {
        // int xor;
        
        int xorR=start^goal;
        int ans=0;
        while(xorR)
        {
            ans+=xorR&1;
            xorR=xorR>>1;
        }
        return ans;
    }
};