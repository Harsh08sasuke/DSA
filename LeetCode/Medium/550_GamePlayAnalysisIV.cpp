/**
 * Problem Link : https://leetcode.com/problems/game-play-analysis-iv/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

# Write your MySQL query statement below

SELECT ROUND(COUNT(DISTINCT player_id)/(SELECT COUNT(DISTINCT player_id) from Activity),2) AS fraction


FROM Activity
WHERE(player_id,DATE_SUB(event_date,interval 1 day)) IN (
    SELECT player_id,MIN(event_date) AS start_date
    from Activity
    GROUP BY player_id
)
