class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mincost=INT_MAX;
        int maxprofit=0;
        for(int i=0;i<prices.size();i++)
        {
            mincost=min(mincost,prices[i]);
            maxprofit=max(maxprofit, prices[i]-mincost);
        }
        return maxprofit;

        
    }
};