class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
    // int count=0;
    // while(left!=right)
    // {
    //     left=left>>1;
    //     right=right>>1;
    //     count++;
    // }
        
    //     return right<<count;
    // }

    while(right>left)
    {
        right=right&(right-1);
       
    }

    
    return right;
    }
};