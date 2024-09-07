class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // Not Optimized Solution
        // int lastInserted=-1;
        // sort(nums1.begin(),nums1.end());
        // sort(nums2.begin(),nums2.end());
        // vector<int> result;
        // for(int i=0;i<nums1.size();i++)
        // {
        //     int element=nums1[i];
        //     for(int j=0;j<nums2.size();j++)
        //     {
        //         if(element==nums2[j] && lastInserted!=nums1[i])
        //         {
        //                 result.push_back(nums1[i]);
        //                 lastInserted=nums1[i];
        //                 break;
        //         }
        //     }
        // }
        int i=0,j=0;
        int n=nums1.size(),m=nums2.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int> result;
        while(i<n && j<m)
        {
            if(nums1[i]==nums2[j])
            {
                result.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j])
                i++;
            else
                j++;    
        }
        result.erase(unique(result.begin(),result.end()),result.end());
        return result;
    }
};