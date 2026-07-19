/**
 * Problem Link : https://leetcode.com/problems/queries-quality-and-percentage/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

# Write your MySQL query statement below
SELECT query_name ,ROUND(AVG(rating/position),2) AS quality ,ROUND(AVG(IF(rating <3,1,0))*100,2) AS poor_query_percentage
FROM Queries
GROUP BY query_name
