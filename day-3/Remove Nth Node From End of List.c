struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode dummy = {0, head}, *fast = &dummy, *slow = &dummy;
    for (int i = 0; i <= n; i++) fast = fast->next;
    while (fast) {
        fast = fast->next;
        slow = slow->next;
    }
    struct ListNode* to_delete = slow->next;
    slow->next = slow->next->next;
    free(to_delete);
    return dummy.next;
}
