1462. Course Schedule IV

Problem
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
There are a total of numCourses courses you have to take, labeled from 0 to numCourses - 1. You are given an array prerequisites where prerequisites[i] = [ai, bi] indicates that you must take course ai first if you want to take course bi.

For example, the pair [0, 1] indicates that you have to take course 0 before you can take course 1.
Prerequisites can also be indirect. If course a is a prerequisite of course b, and course b is a prerequisite of course c, then course a is a prerequisite of course c.

You are also given an array queries where queries[j] = [uj, vj]. For the jth query, you should answer whether course uj is a prerequisite of course vj or not.

Return a boolean array answer, where answer[j] is the answer to the jth query.

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

My solution 
    runtime of 17 ms   | Beating 89.58%
    Memory of 28.82 mb | Beating 12.66%


Memory Complexity
------------------------------------------------------------------
Due to the creation of a Adjacency Matrix (reqCk) we create a complexity of O(numCourses^2)
The return array takes up O(queriesSize)

Total Memory Complexity : O(numCourses^2 + queriesSize)

Time Complexity
------------------------------------------------------------------
Floyd Warshall Algorithm implementation takes up O(numCourses^3)
Processes the queries takes a constant O(queriesSize)

Total Time Complexity : O(numCourses^3 + queriesSize)
