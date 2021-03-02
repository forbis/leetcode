class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> ans(candyType.begin(), candyType.end());
        return min((candyType.size() / 2), ans.size());
    }
};