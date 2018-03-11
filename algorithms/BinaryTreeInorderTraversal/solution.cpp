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
    vector<int> inorderTraversal(TreeNode* root)
    {
        vector<int> result;

        std::stack<TreeNode *> s;
        auto curr = root;

        while (curr != nullptr || !s.empty())
        {
            if (curr == nullptr)
            {
                auto node = s.top();
                s.pop();

                result.push_back(node->val);
                curr = node->right;
            }
            else
            {
                s.push(curr);
                curr = curr->next;
            }
        }
        

        return result;
    }
};
