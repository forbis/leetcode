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
    void traversal(TreeNode* root, int v, int current, int target) {
        if(root->left != nullptr && current + 1 != target) {
            traversal(root->left, v, current + 1, target);
        }
        
        if(root->right != nullptr && current + 1 != target) {
            traversal(root->right, v, current + 1, target);
        }
        if(current + 1 == target) {
            TreeNode* NewLeftNode = new TreeNode(v, root->left, nullptr);
            TreeNode* NewRightNode = new TreeNode(v, nullptr, root->right);
            root->left = NewLeftNode;
            root->right = NewRightNode;
        }
    }
    
    TreeNode* addOneRow(TreeNode* root, int v, int d) {
        TreeNode* tmp = root;
        if(d == 1) {
            TreeNode* NewNode = new TreeNode(v, root, nullptr);
            root = NewNode;
        }
        else { traversal(root, v, 1, d); }
        
        return root;
    }
};