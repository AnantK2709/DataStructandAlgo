# Definition for singly-linked list.
# Detects if a linked list has a cycle in it.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None
from typing import Optional
from collections import defaultdict

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        counts = set()
        curr = head
        while curr:
            if curr in counts:
                return True
            counts.add(curr)
            curr = curr.next
        return False
            
                

        