2410. Maximum Matching of Players With Trainers

Problem
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
You are given a 0-indexed integer array players, where players[i] represents the ability of the ith player. You are also given a 0-indexed integer array trainers, where trainers[j] represents the training capacity of the jth trainer.

The ith player can match with the jth trainer if the player's ability is less than or equal to the trainer's training capacity. Additionally, the ith player can be matched with at most one trainer, and the jth trainer can be matched with at most one player.

Return the maximum number of matchings between players and trainers that satisfy these conditions.
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

My solution 

    runtime of 56 ms   | Beating 47.83%
    
    Memory of 17.90 mb | Beating  78.26%


Memory Complexity
------------------------------------------------------------------
O(1)

Time Complexity
------------------------------------------------------------------
O(Nlogn+Mlogm)

