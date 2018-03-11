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
    vector<int> preorderTraversal(TreeNode* root)
    {
        vector<int> result;

        if (root == nullptr)
        {
            return result;
        }
        
        std::stack<TreeNode *> s;
        s.push(root);

        while (!s.empty())
        {
            auto node = s.top();
            s.pop();

            result.push_back(node->val);

            if (node->right != nullptr)
            {
                s.push(node->right);
            }

            if (node->left != nullptr)
            {
                s.push(node->left);
            }
        }
        
        return result;
    }
};
