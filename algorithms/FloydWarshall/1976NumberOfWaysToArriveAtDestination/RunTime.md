1976. Number of Ways to Arrive at Destination

Problem
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
You are in a city that consists of n intersections numbered from 0 to n - 1 with bi-directional roads between some intersections. The inputs are generated such that you can reach any intersection from any other intersection and that there is at most one road between any two intersections.

You are given an integer n and a 2D integer array roads where roads[i] = [ui, vi, timei] means that there is a road between intersections ui and vi that takes timei minutes to travel. You want to know in how many ways you can travel from intersection 0 to intersection n - 1 in the shortest amount of time.

Return the number of ways you can arrive at your destination in the shortest amount of time. Since the answer may be large, return it modulo 109 + 7.

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

My solution 
    runtime of 367 ms   | Beating 7.69%
    Memory of 27.96 mb | Beating  7.69%


Memory Complexity
------------------------------------------------------------------
The dp array is a 3D array of size n x n x 2, where n is the number of nodes. This requires O(n^2) space for each pair of nodes, and each pair has 2 values (distance and path count). Therefore, the total space complexity of the dp array is O(n^2 * 2), which simplifies to O(n^2).

The roads input requires storage for roadsSize roads, each having 3 integers. This contributes to a space complexity of O(roadsSize).

Total Memory Complexity : O(n^2 + roadsSize)

Time Complexity
------------------------------------------------------------------
The Floyd-Warshall algorithm is applied, which involves three nested loops over all pairs of nodes. This leads to a time complexity of O(n^3) for updating the shortest distances and counting paths.

Initializing the dp array and setting up the roads takes O(n^2) for initialization, and O(roadsSize) for setting the direct roads, both of which are less significant compared to the O(n^3) of the Floyd-Warshall algorithm.

The return statement takes constant time O(1).

Total Time Complexity : O(n^3 + roadsSize)
