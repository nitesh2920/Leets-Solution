class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int k) {
        vector<int> v;
        int n=arr.size();
       unordered_map<int ,int>maps;

       for(int i=0;i<n;i++)
       {
           int val=k-arr[i];

           if(maps.find(val)!=maps.end())
           {
               v.push_back(maps[val]);
               v.push_back(i);
           }
           maps[arr[i]]=i;
         
       }

        return v;
    }
};