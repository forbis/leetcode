class Solution {
public:
    vector<int> advantageCount(vector<int>& A, vector<int>& B) {
        sort(A.begin(), A.end());
        vector<int> ans;
        vector<int>::iterator num;
        for(auto i:B) {
            num = i < A.back() ? upper_bound(A.begin(), A.end(), i) : A.begin();
            ans.push_back(*num);
            A.erase(num);
        }
        
        return ans;
    }
};