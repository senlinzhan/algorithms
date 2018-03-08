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
    ListNode* swapPairs(ListNode* head)
    {
        if (head == nullptr || head->next == nullptr)
        {
            return head;
        }

        ListNode *tmpNode = new ListNode(0);
        ListNode *tail = tmpNode;

        ListNode *curr = head;
        while (curr != nullptr)
        {
            if (curr->next != nullptr)
            {
                auto first = curr;
                auto second = curr->next;
                auto third = second->next;

                tail->next = second;
                tail = tail->next;

                tail->next = first;
                tail = tail->next;

                curr = third;
            }
            else
            {
                tail->next = curr;
                tail = tail->next;

                break;
            }
        }
        tail->next = nullptr;
        
        auto newHead = tmpNode->next;
        delete tmpNode;

        return newHead;
    }
};
