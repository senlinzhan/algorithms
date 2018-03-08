/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head)
    {
        if (head == nullptr || head->next == nullptr)
        {
            return;
        }

        std::vector<ListNode *> nodes;
        for (auto node = head->next; node != nullptr; node = node->next)
        {
            nodes.push_back(node);
        }

        auto tail = head;
        for (int i = 0; i < nodes.size() / 2; i++)
        {
            tail->next = nodes[nodes.size() - 1 - i];
            tail = tail->next;

            tail->next = nodes[i];
            tail = tail->next;
        }

        if (nodes.size() % 2 == 1)
        {
            tail->next = nodes[nodes.size() / 2];
            tail = tail->next;
        }

        tail->next = nullptr;
    }
};
