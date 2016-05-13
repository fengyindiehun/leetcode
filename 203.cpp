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
    ListNode* removeElements(ListNode* head, int val) {
        if (head == NULL) return head;
        ListNode* prev = NULL;
        ListNode* cur = head;
        ListNode* result = NULL;
        while (cur != NULL) {
            if (cur->val == val) {
                if (prev == NULL) {
                    cur = cur->next;
                } else {
                    prev->next = cur->next;
                    cur = cur->next;
                }
            } else {
                if (prev == NULL) {
                    result = cur;
                }
                prev = cur;
                cur = cur->next;
            }
        }
        return result;
    }
};
