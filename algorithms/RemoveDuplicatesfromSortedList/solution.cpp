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
    ListNode* deleteDuplicates(ListNode* head)
    {
        if (head == nullptr || head->next == nullptr)
        {
            return head;
        }

        ListNode *prev = head;
        ListNode *curr = prev->next;

        while (curr != nullptr)
        {
            auto next = curr->next;
            if (prev->val == curr->val)
            {
                prev->next = next;
                delete curr;

                curr = next;
            }
            else
            {
                prev = curr;
                curr = next;
            }
        }

        return head;
    }
};
