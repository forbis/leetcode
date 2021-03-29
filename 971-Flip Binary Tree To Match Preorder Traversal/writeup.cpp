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
    int index = 0;
    void traversal(TreeNode* root, vector<int>& voyage, vector<int>& ans) {
        if(root != nullptr) {
            if(root->val != voyage[index]) { 
                ans.clear();
                ans = {-1}; 
            }
            else if(root->left && root->left->val != voyage[index + 1]) {
                ans.push_back(root->val);
                index++;
                traversal(root->right, voyage, ans);
                traversal(root->left, voyage, ans);
            }
            else {
                index++;
                traversal(root->left, voyage, ans);
                traversal(root->right, voyage, ans);
            }
        }
    }
    vector<int> flipMatchVoyage(TreeNode* root, vector<int>& voyage) {
        vector<int> ans;
        traversal(root, voyage, ans);
        if(!ans.empty() && ans[0] == -1) { return {-1}; }
        return ans;
    }
};