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
    void append(ListNode **tail, int val)
    {
        (*tail)->next = new ListNode(val);
        *tail = (*tail)->next;
    }
    
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
    {
        auto tmpNode = new ListNode(0);
        auto tail = tmpNode;

        auto i1 = l1;
        auto i2 = l2;
        while (i1 != nullptr && i2 != nullptr)
        {
            if (i1->val <= i2->val)
            {
                append(&tail, i1->val);
                i1 = i1->next;
            }
            else
            {
                append(&tail, i2->val);
                i2 = i2->next;
            }
        }

        while (i1 != nullptr)
        {
            append(&tail, i1->val);
            i1 = i1->next;            
        }

        while (i2 != nullptr)
        {
            append(&tail, i2->val);
            i2 = i2->next;            
        }

        auto newHead = tmpNode->next;
        delete tmpNode;

        return newHead;
    }
};
