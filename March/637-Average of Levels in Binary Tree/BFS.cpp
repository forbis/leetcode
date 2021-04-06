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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        queue<TreeNode*> tmp;
        tmp.push(root);
        while(!tmp.empty()) {
            long long int size = tmp.size();
            long long int sum = 0;
            
            for(int i = 0; i < size; i++) {
                TreeNode* current = tmp.front();
                tmp.pop();
                
                sum += current->val;
                if(current->left) { tmp.push(current->left); }
                if(current->right) { tmp.push(current->right); }
            }
            
            ans.push_back((double)sum / size);
        }
        
        return ans;
    }
};