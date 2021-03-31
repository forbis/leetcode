class Solution {
public:
    vector<int> movesToStamp(string stamp, string target) {
        vector<int> ans;
        while(true) {
            bool isFound = false;
            for(int i = stamp.length(); i > 0; i--) { 
                for(int j = 0; j <= stamp.length() - i; j++) {
                    string head(j, '_');
                    string tail(stamp.length() - i - j, '_');
                    string tmp = head + stamp.substr(j, i) + tail;
                    size_t index = target.find(tmp);
                    while(index != string::npos) {
                        isFound = true;
                        ans.push_back(index);
                        fill(target.begin() + index, target.begin() + index + stamp.length(), '_');
                        index = target.find(tmp);
                    }
                }
            }
            
            if(!isFound) { break; }
        }

        string cmp(target.length(), '_');
        if(target.compare(cmp) != 0) { return {}; }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};