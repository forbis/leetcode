class Solution {
public:
    /*
    in sort() arg1 is i+1, arg2 is i.
    */
    static bool cmp(vector<int> a, vector<int> b) {
        if(a[0] == b[0]) { return a[1] > b[1]; }
        return b[0] > a[0];
    }
    
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        sort(envelopes.begin(), envelopes.end(), cmp); 
        /*
        for(auto env:envelopes) {
            cout << env[0] << ", " << env[1] << endl;
        }
        */
        vector<int> ans;
        vector<int>::iterator low;
        for(auto& env:envelopes) {
            low = lower_bound(ans.begin(), ans.end(), env[1]);
            if(low == ans.end()) { 
                // cout << env[1] << endl;
                ans.push_back(env[1]);
            }
            // ans[low - ans.begin()] = env[1]
            else { *low = env[1]; }
        }
        
        return ans.size();
    }
};