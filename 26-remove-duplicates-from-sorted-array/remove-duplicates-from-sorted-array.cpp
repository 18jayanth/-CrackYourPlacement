class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        int d=s.size();
        int k=0;
        for(auto i:s)
        {
            nums[k++]=i;
        }
        return d;
        
    }
};