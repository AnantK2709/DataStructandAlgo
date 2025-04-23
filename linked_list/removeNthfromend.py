# Definition for singly-linked list
from typing import Optional
# Remove the nth node from the end of a linked list.
# The list is 1-indexed, so the last node is the 1st node from the end.
# For example, given 1->2->3->4->5 and n = 2, it should return 1->2->3->5.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        # If I reverse the list while then remove nth from the lsit and 
        # then reverse it back again 
        curr = head
        prev = None
        length  = 0
        while curr:
            temp = curr.next
            curr.next = prev
            prev = curr
            curr = temp
            length += 1
        #prev is the new head
        if length == 1 and n == 1:
            prev = None
            return prev
        temp = prev
        n-=1
        if n == 0:
            prev = temp.next
        else:
            while n>0:
                pre = temp
                temp = temp.next
                n-=1
            pre.next = temp.next
        

        #Reverse the list again 
        pr = None
        curr = prev
        while curr:
            temp = curr.next
            curr.next = pr
            pr = curr
            curr = temp
        return pr
        
        
        

        