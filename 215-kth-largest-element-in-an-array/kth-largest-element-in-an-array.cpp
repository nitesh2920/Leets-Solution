class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

        // sort(nums.begin(),nums.end());

        // return nums[nums.size()-k];

         priority_queue<int,vector<int>,greater<int>> pq;
        for(int it:nums)
        {
            pq.push(it);

            if(pq.size()>k)
                pq.pop();
        }

        return pq.top();
    }
};