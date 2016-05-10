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
    ListNode* reverseList(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;
        if (head->next->next == NULL) {
            ListNode* tmp = head->next;
            tmp->next = head;
            head->next = NULL;
            return tmp;
        }

        ListNode* first = head;
        ListNode* second = first->next;
        ListNode* cur = second->next;
        ListNode* result = NULL;
        while (cur != NULL) {
            second->next = cur->next;
            cur->next = first->next;
            first->next = cur;
            result = cur;
            cur = second->next;
        }
        second->next = first;
        first->next = NULL;
        return result;
    }
};
