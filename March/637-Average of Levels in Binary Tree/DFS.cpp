/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<long long int> cnt, sum;
    void dfs(TreeNode* current, int depth) {
        if(!current) { return; }        
        if(cnt.size() <= depth) { cnt.push_back(0); }
        if(sum.size() <= depth) { sum.push_back(0); }
        
        cnt[depth] += 1;
        sum[depth] += current->val;
        dfs(current->left, depth + 1);
        dfs(current->right, depth + 1);
    }
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        dfs(root, 0);
        for(int i = 0; i < sum.size(); i++) {
            ans.push_back((double)sum[i] / cnt[i]);
        }
        
        return ans;
    }
};