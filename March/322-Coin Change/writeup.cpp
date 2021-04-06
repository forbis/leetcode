class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if(!amount) { return 0; }
        vector<long int> dynamic_programing(amount + 1, INT_MAX);
        dynamic_programing[0] = 0;
        for(auto coin:coins) {
            for(int i = coin; i <= amount; i ++) {
                dynamic_programing[i] = min(dynamic_programing[i - coin] + 1, dynamic_programing[i]);
            }
        }
        
        return dynamic_programing[amount] == INT_MAX ? -1 : dynamic_programing[amount];
    }
};