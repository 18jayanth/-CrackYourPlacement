class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int target=n/2+1;

        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
        }
        for(auto it:mpp)
        {
            if(it.second>=target)
            return it.first;
        }
        return -1;
        
    }
};