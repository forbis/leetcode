class Solution {
public:
    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
        vector<string> ans(queries.size(), "");
        set<string> words(wordlist.begin(), wordlist.end());
        map<string, string> cap;
        map<string, string> vow;
        
        for(auto str:wordlist) {
            string s2;
            string v2;
            
            for(auto c:str) {
                s2 += tolower(c);
                if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                    v2 += "_";
                }

                else if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                    v2 += "_";
                }

                else { v2 += tolower(c); }
            }
            
            if(cap[s2].empty()) { 
                cap[s2] = str;
            }

            if(vow[v2].empty()) { 
                vow[v2] = str;
            }
        }
        
        for(int i = 0; i < queries.size(); i++) {
            string s1;
            string v1;
            for(auto c:queries[i]) {
                s1 += tolower(c);
                if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                    v1 += "_";
                }

                else if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                    v1 += "_";
                }

                else { v1 += tolower(c); }
            }
            if(words.count(queries[i])) { 
                ans[i] = queries[i];
            }

            else if(!cap[s1].empty()) {
                ans[i] = cap[s1];
            }

            else if(!vow[v1].empty()) {
     
                ans[i] = vow[v1];
            }
        }
        
        return ans;
    }
};