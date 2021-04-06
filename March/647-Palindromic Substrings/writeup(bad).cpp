class Solution {
public:
    int countSubstrings(string s) {
        int ans = s.length();
        for(string::iterator head = s.begin(); head != s.end(); head++) {
            for(string::iterator tail = head + 2; tail != s.end() + 1; tail++) {
                string s1(head, tail);
                string s2(head, tail);
                reverse(s2.begin(), s2.end());
                if(!s1.compare(s2)) { 
                    ans++; 
                }
            }
        }
        
        return ans;
    }
};