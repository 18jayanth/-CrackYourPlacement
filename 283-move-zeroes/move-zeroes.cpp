class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cnt=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                cnt++;
            }
        }
        int k=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                nums[k]=nums[i];
                k++;
            }
        }
        for(int i=k;i<n;i++)
        {
            nums[i]=0;
        }

        
    }
};