class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if(nums.size() == 1) { return 1; }
        // init = 0, <0 = 1, >0 = 2
        int flag = 0;
        int len = 1;
        for(int i = 1; i < nums.size(); i++) {
            if((nums[i] - nums[i - 1] > 0) && (flag != 2)) { 
                flag = 2;
                len++; 
            }
            else if((nums[i] - nums[i - 1] < 0) && (flag != 1)) { 
                flag = 1;
                len++; 
            }
        }
        
        return len;
    }
};