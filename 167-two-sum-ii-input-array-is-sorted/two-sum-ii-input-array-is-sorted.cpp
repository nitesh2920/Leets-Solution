class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
    //     vector<int>ans;
    //    for(int i=0;i<numbers.size();i++)
    //    {
    //        for(int j=i+1;j<numbers.size();j++)
    //        {
    //            if(numbers[i]+numbers[j]==target)
    //            {
    //                ans.push_back(i+1);
    //                ans.push_back(j+1);
    //                break;
    //            }         
    //        }
    //    }
    //    return ans;

    //OPTIMIZED WAY
    vector<int>v;
    unordered_map<int,int>map;

    for(int i=0;i<numbers.size();i++)
    {
        int value=target-numbers[i];

        if(map.find(value)!=map.end())
        {
            v.push_back(map[value]+1);
            v.push_back(i+1);
        }

        map[numbers[i]]=i;
    }

    return v;
    }
};