3572. Maximize Y‑Sum by Picking a Triplet of Distinct X‑Values

Problem
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
You are given two integer arrays x and y, each of length n. You must choose three distinct indices i, j, and k such that:

x[i] != x[j]
x[j] != x[k]
x[k] != x[i]
Your goal is to maximize the value of y[i] + y[j] + y[k] under these conditions. Return the maximum possible sum that can be obtained by choosing such a triplet of indices.

If no such triplet exists, return -1.
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

My solution 
    runtime of 211 ms   | Beating -%
    Memory of 86.7 mb | Beating -%


Memory Complexity
------------------------------------------------------------------
O(n)

Time Complexity
------------------------------------------------------------------
O(n log n)
