1910. Remove All Occurrences of a Substring

Problem
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Given two strings s and part, perform the following operation on s until all occurrences of the substring part are removed:
Find the leftmost occurrence of the substring part and remove it from s.
Return s after removing all occurrences of part.
A substring is a contiguous sequence of characters in a string.
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Intuition
Given the problem parameters this can be easily solved using a stack

Approach
First push the values onto the stack and wait for two condtions

Stack size is at least equal to the length of the substring
The top of the stack is equal to the last character of the substring
When these two conditions are met we can iterate through the stack to see if the substring is contained if it is we will subtract its length from the top variable.


My solution 

    runtime of 0 ms   | Beating 100.00%
    
    Memory of 8.24 mb | Beating 35.71%


Memory Complexity
------------------------------------------------------------------
O(n)

Time Complexity
------------------------------------------------------------------
O(n)
