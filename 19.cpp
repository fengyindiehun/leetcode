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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* prev = head;
        ListNode* post = head;
        ListNode* result = head;
        for (int i = 0; i < n; ++i) {
            prev = prev->next;
        }

        if (prev == NULL) return head->next;

        while (prev->next != NULL) {
            prev = prev->next;
            post = post->next;
        }
        post->next = post->next->next;
        return result;
    }
};
