3174. Clear Digits

Problem
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
You are given a string s.

Your task is to remove all digits by doing this operation repeatedly:

Delete the first digit and the closest non-digit character to its left.
Return the resulting string after removing all digits.
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Intuition
The idea for this problem is to create a stack which will push when using a nnon-digit character, and pop when it is a digit. This way we can keep deleting the closest non-digit character on the left

Approach
Iterate through each character of the input string.

 - If it's a non-digit character, push it onto the stack.

 - If it's a digit, pop the stack (remove the last non-digit character).

After processing all characters, the stack will hold the final string however remeber to add the null terminator


My solution 

    runtime of 0 ms   | Beating 100.00%
    
    Memory of 7.90 mb | Beating 88.60%


Memory Complexity
------------------------------------------------------------------
O(n)

Time Complexity
------------------------------------------------------------------
O(n)
