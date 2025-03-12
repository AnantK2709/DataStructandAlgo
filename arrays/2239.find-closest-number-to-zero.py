#
# @lc app=leetcode id=2239 lang=python3
#
# [2239] Find Closest Number to Zero
#

''' 
Logic for this was that we need to find the number which is closest to zero.
If we have a number which is positive, then it is closest to zero.
If we have a number which is negative, then we need to check if the absolute value of the number is same as the positive number.
If it is same, then we need to consider the positive number.
If it is not same, then we need to consider the negative number, thne we check if the num is same as min or not and 
if its same and min is positive then min would be abs(num) since we need to take the bigger number 
Similarly for negative, meaning the whole array is negative so we will take the negative number
'''

# @lc code=start
class Solution:
    def findClosestNumber(self, nums: List[int]) -> int:
        min = float('inf')
        distance = float('inf')
        if len(nums)==1:
            return nums[0]
        for num in nums:
            if(abs(num)<=abs(min)):
                if num >= 0:
                    min = num
                if num < 0:
                    if (abs(num)==abs(min)):
                        if min >= 0:
                            min = abs(num)
                        else: 
                            min = num
                    else:
                        min = num
        return min
     
# @lc code=end

