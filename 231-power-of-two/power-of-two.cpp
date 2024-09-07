class Solution {
public:
    bool isPowerOfTwo(int n) {

        //Using ceil floor
        /*
            if(n<=0)
            return false;
            int flo=floor(log2(n));
            int ce=ceil(log2(n));
            return flo==ce;  
            
        */
        //Bit
        if(n<=0)
            return false;
        return ((n&(n-1))==0);
        //Using Bit Manipulation
       
      
    }
};