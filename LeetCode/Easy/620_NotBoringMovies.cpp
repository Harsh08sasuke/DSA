/**
 * Problem Link : https://leetcode.com/problems/not-boring-movies/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

# Write your MySQL query statement below
SELECT *
FROM Cinema 


where id%2!=0
AND description!='boring'
ORDER BY rating desc
