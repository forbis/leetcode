class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = 0;
        int sum = 0;
        for(auto& num:nums) {
            sum += num;
        }
        
        for(int i = 0; i < nums.size() + 1; i++) {
            ans += i;
        }
        
        return ans - sum;
    }
};