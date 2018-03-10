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
    bool hasCycle(ListNode *head)
    {
        if (head == nullptr || head->next == nullptr)
        {
            return false;
        }

        auto i = head;
        auto j = head->next;

        while (j != nullptr && j->next != nullptr)
        {
            j = j->next->next;
            i = i->next;

            if (i == j)
            {
                return true;
            }
        }
        
        return false;
    }
};
