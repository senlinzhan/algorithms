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
    vector<vector<int>> levelOrder(TreeNode* root)
    {
        vector<vector<int>> result;
        if (root == nullptr)
        {
            return result;
        }

        queue<TreeNode *> que;
        que.push(root);

        while (!que.empty())
        {
            queue<TreeNode *> newQue;
            std::vector<int> level;
            
            while (!que.empty())
            {
                auto node = que.front();
                que.pop();

                level.push_back(node->val);
                if (node->left != nullptr)
                {
                    newQue.push(node->left);
                }

                if (node->right != nullptr)
                {
                    newQue.push(node->right);
                }
            }

            result.push_back(level);
            que = newQue;
        }

        return result;
    }
};
