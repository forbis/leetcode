class Solution {
public:
    string originalDigits(string s) {
        string ans;
        int len = s.length();
        vector<int> char_list(26, 0), num_count(10, 0);
        for(auto c:s) { char_list[c - 'a'] += 1; }
        num_count[0] = char_list['z' - 'a'];
        num_count[2] = char_list['w' - 'a'];
        num_count[4] = char_list['u' - 'a'];
        num_count[6] = char_list['x' - 'a'];
        num_count[8] = char_list['g' - 'a'];
        num_count[1] = char_list['o' - 'a'] - num_count[0] - num_count[2] - num_count[4];
        num_count[3] = char_list['h' - 'a'] - num_count[8];
        num_count[5] = char_list['f' - 'a'] - num_count[4];
        num_count[7] = char_list['s' - 'a'] - num_count[6];
        num_count[9] = char_list['i' - 'a'] - num_count[8] - num_count[5] - num_count[6];
        
        for(int i = 0; i < 10; i++) {
            for(int j = 0; j < num_count[i]; j++){
                ans += (i + '0');
            }
        }
        
        
        return ans;
    }
};