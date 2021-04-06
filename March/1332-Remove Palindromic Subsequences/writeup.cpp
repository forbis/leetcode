class Solution {
public:
    int removePalindromeSub(string s) {
        string cmp(s.rbegin(), s.rend());
        if(s.empty()) { return 0; }       
        else if(!s.compare(cmp)) { return 1; }
        else { return 2; }
    }
};
