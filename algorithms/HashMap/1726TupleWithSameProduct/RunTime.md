1726. Tuple with Same Product

Problem
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Given an array nums of distinct positive integers, return the number of tuples (a, b, c, d) such that a * b = c * d where a, b, c, and d are elements of nums, and a != b != c != d.
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Intuition
This problem involves finding how many quadruples (a, b, c, d) exist in an array such that the product of pairs (a * b) is equal to the product of pairs (c * d).

To solve this we can use a hash table of size 10^8 + 1 to store the frequency of all the possible products of (a * b) and (c * d).

Each time we find a pair that is already within the hash map we can add the count of those pairs to the results thus simplifying the code further

Approach
Allocate space for an array containing zeros of size 10^8 + 1
Create a nested for loop to iterate throughout the possible combinations of nums[i] * nums[j]

If the product is already contained within the hash map, the number of valid quadruples that include this pair is increased by the number of times that product has occured in the hash table thus far.

Finally the result will be multiplied by 8 due to the 8 different ways the pairs could possibly be arranged

Unfortunately you have to actually use good coding practice and free your memory before returning your result or else a "Memory Limit Exceeded" error will occur



My solution 

    runtime of 387 ms   | Beating 80.00%
    
    Memory of 289.75 mb | Beating 20.00%


Memory Complexity
------------------------------------------------------------------
O(n^2)

Time Complexity
------------------------------------------------------------------
O(n^2)
