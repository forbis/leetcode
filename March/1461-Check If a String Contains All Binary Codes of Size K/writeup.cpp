class Solution {
public:
    bool hasAllCodes(string s, int k) {
        set<string> storage;
        if(s.length() <= k) { return false; }
        for(int i = 0; i <= s.length() - k; i++) {
            storage.insert(s.substr(i, k));
        }
        
        return storage.size() == pow(2, k);
    }
};