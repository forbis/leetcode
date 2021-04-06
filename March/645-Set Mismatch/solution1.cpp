class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        for(auto& num:nums){
            if(nums[abs(num) - 1] < 0) { ans.push_back(abs(num)); }
            else{ nums[abs(num) - 1] = -nums[abs(num) - 1]; }
            
        }
        
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > 0) { ans.push_back(i + 1); }
        }
        
        return ans;
    }
};