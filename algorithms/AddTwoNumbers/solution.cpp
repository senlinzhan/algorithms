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
    void append(ListNode **head, ListNode **tail, int sum)
    {
        if (*head == nullptr)
        {
            *head = new ListNode(sum);
            *tail = *head;
        }
        else
        {
            (*tail)->next = new ListNode(sum);
            *tail = (*tail)->next;
        }        
    }
    
    ListNode* addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        if (l1 == nullptr && l2 == nullptr)
        {
            return nullptr;
        }

        ListNode *head = nullptr;
        ListNode *tail = nullptr;
        
        int extra = 0;

        ListNode *i1 = l1;
        ListNode *i2 = l2;
        while (i1 != nullptr && i2 != nullptr)
        {
            int sum = i1->val + i2->val + extra;
            extra = sum / 10;
            sum = sum % 10;

            append(&head, &tail, sum);

            i1 = i1->next;
            i2 = i2->next;
        }

        for (; i1 != nullptr; i1 = i1->next)
        {
            int sum = i1->val + extra;
            extra = sum / 10;
            sum = sum % 10;

            append(&head, &tail, sum);
        }

        for (; i2 != nullptr; i2 = i2->next)
        {
            int sum = i2->val + extra;
            extra = sum / 10;
            sum = sum % 10;

            append(&head, &tail, sum);
        }

        if (extra > 0)
        {
            append(&head, &tail, extra);
        }
        
        return head;
    }
};
