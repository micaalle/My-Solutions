1352. Product of the Last K Numbers

Problem
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
You are given a 0-indexed string blocks of length n, where blocks[i] is either 'W' or 'B', representing the color of the ith block. The characters 'W' and 'B' denote the colors white and black, respectively.

You are also given an integer k, which is the desired number of consecutive black blocks.

In one operation, you can recolor a white block such that it becomes a black block.

Return the minimum number of operations needed such that there is at least one occurrence of k consecutive black blocks.
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

My solution 

    runtime of 0 ms   | Beating 100.00%
    
    Memory of 8.02 mb | Beating  11.76%


Memory Complexity
------------------------------------------------------------------
O(1)

Time Complexity
------------------------------------------------------------------
O(len * k)
