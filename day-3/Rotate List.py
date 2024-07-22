class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def rotate_right(head, k):
    if not head:
        return None
    length = 1
    last = head
    while last.next:
        last = last.next
        length += 1
    last.next = head
    k %= length
    for _ in range(length - k):
        last = last.next
    new_head = last.next
    last.next = None
    return new_head
