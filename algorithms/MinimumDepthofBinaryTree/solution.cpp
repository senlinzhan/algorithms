/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root == nullptr)
        {
            return 0;
        }
        int left = minDepth(root->left);
        int right = minDepth(root->right);
        
        if (left == 0)
        {
            return 1 + right;
        }
        if (right == 0)
        {
            return 1 + left;
        }
        
        return 1 + std::min(left, right);
    }
};
