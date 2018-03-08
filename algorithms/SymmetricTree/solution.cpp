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
    bool isSymmetric(TreeNode* root) {
        if (root == nullptr)
        {
            return true;
        }

        return isSymmetric(root->left, root->right);
    }

    bool isSymmetric(TreeNode *p, TreeNode *q)
    {
        if (p == nullptr && q == nullptr)
        {
            return true;
        }

        if (p == nullptr || q == nullptr)
        {
            return false;
        }

        return p->val == q->val && isSymmetric(p->left, q->right) && isSymmetric(p->right, q->left);
    }    
};

