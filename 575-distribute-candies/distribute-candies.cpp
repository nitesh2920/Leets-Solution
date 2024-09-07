class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int>s(candyType.begin(),candyType.end());
        int n=candyType.size();
        int length=n/2;
        if(s.size()>=length)
            return length;
        return s.size();
        

    }
};