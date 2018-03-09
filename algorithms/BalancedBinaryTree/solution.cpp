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
    bool isBalanced(TreeNode* root)
    {
        if (root == nullptr)
        {
            return true;
        }

        int diff = depth(root->left) - depth(root->right);
        return std::abs(diff) <= 1 && isBalanced(root->left) && isBalanced(root->right);
    }

    int depth(TreeNode *root)
    {
        if (root == nullptr)
        {
            return 0;
        }
        
        return 1 + std::max(depth(root->left), depth(root->right));
    }
};
