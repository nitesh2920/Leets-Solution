class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>map;
       int i=0;
       int j=0;
       while(i<nums1.size()&& j<nums2.size())
       {
           if(nums1[i]==nums2[j]){
               return nums1[i];
                //  map[nums1[i]]++;
                //  i++;
                //  j++;
           }
               
            else if(nums1[i]<nums2[j])
                i++;
            else
                j++;
       }
        // int min=INT_MAX;
    //    for(auto it:map)
    //     {
    //         if(it.second<min){
    //               min=it.first;
    //               return min;
    //         }
              
    //     }
        
        return -1;
    }
};