class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        set<char> s;
        int count=0;
        for(int i=0;i<jewels.size();i++)
        {
            s.insert(jewels[i]);
        }

        for(auto it:stones){
            if(s.count(it))
                count++;
        }
        return count;
    }
};