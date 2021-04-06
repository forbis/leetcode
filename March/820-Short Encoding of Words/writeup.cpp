class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        sort(words.begin(), words.end(), [](string& word1, string& word2) {
        return word1.length() > word2.length();
    });
        string ans;
        for(auto& word:words) {
            string tmp = word + "#";
            if(ans.find(tmp) == string::npos) {
                ans += tmp;
            }
        }
        
        return ans.length();
    }
};