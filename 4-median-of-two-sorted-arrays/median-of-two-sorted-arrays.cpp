class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        //BRUTE FORCE METHOD
        vector<int>ans=nums1;
        ans.insert(ans.end(),nums2.begin(),nums2.end());
        sort(ans.begin(),ans.end());
        int n=ans.size();
        if(n%2==0)
        {
            int mid1=ans[n/2];
            int mid2=ans[(n/2)-1];
            double median=(mid1+mid2)/2.0;
            return median;            
        }
        else
            return ans[n/2]; 
    }
};