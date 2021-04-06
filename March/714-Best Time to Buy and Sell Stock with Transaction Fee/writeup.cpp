class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int ans = 0, hold = -prices[0];
        for(int i = 1; i < prices.size(); i++) {
            ans = max(ans, prices[i] + hold - fee);
            hold = max(hold, ans - prices[i]);
        }
        
        return ans;
    }
};