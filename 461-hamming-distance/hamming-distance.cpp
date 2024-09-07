class Solution {
public:
    int hammingDistance(int x, int y) {
        // __builtin_popcount()
        int count=0;
        int ans=x^y;
        while(ans){
            if(ans&1){
             count++;
            }
            ans=ans>>1;

        }
        return count;
    }
};