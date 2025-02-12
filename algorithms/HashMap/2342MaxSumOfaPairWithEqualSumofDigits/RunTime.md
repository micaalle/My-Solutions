2342. Max Sum of a Pair With Equal Sum of Digits

Problem
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
You are given a 0-indexed array nums consisting of positive integers. You can choose two indices i and j, such that i != j, and the sum of digits of the number nums[i] is equal to that of nums[j].
Return the maximum value of nums[i] + nums[j] that you can obtain over all possible indices i and j that satisfy the conditions.

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

My solution 

    runtime of 16 ms   | Beating 11.11%
    
    Memory of 15.74 mb | Beating  66.67%


Intuition

The goal is to find the max sum of two numbers in an array that share the same sum of digits. Originally I thought this could be done through brute force using a O(n^2) loop however that will go past the constraints.

Instead we can use a hash table to save the max number for each unique digit sum.

Approach

- First we need a helper function to calculate the sum, this can be done iteratively however I opted for a recursive approach.

- Then we have to create a hashtable to store all possible digit sums

Then we can finally iterate over the array with two different checks

- If the digit sum has been previously found update the digit sum if the max is higher

- If it has not been found before store it as the largest value for that sum of digits


Memory Complexity
------------------------------------------------------------------
O(1)

Time Complexity
------------------------------------------------------------------
O(n * m)
