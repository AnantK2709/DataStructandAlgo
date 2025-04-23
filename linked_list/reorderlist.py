# Definition for singly-linked list.
from typing import Optional
# Reorders a linked list in place.
# The reordering is done in such a way that the first node is followed by the last node, then the second node, then the second last node, and so on.
# For example, given 1->2->3->4->5, it should be reordered to 1->5->2->4->3.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        # Firstly we use hare and turtle to find the midpoint of the whole thing 
        fast = head 
        slow = head
        while fast and fast.next!=None:
            fast = fast.next.next
            slow = slow.next
        first = head
        second = slow.next
        slow.next = None
        prev = None
        # Now we reverse the second half of the linked list
        while second:
            temp = second.next
            second.next = prev
            prev = second
            second = temp
        
        second = prev
        while second:
            temp = second.next
            first.next, second.next = second, first.next
            second = temp
            first = first.next.next


        

        
        
        