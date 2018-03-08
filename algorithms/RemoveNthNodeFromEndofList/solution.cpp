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
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        ListNode *newHead = head;
        
        std::vector<ListNode *> nodes;

        if (head == nullptr)
        {
            return nullptr;
        }

        for (auto node = head; node != nullptr; node = node->next)
        {
            nodes.push_back(node);
        }

        int removePos = nodes.size() - n;
        if (removePos == 0)
        {
            newHead = head->next;
            delete head;
        }
        else
        {
            nodes[removePos - 1]->next = nodes[removePos]->next;
            delete nodes[removePos];
        }
        
        return newHead;
    }
};
