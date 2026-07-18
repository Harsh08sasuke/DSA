/**
 * Problem Link : https://leetcode.com/problems/managers-with-at-least-5-direct-reports/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

# Write your MySQL query statement below
SELECT e1.name
FROM Employee e1
Inner Join Employee e2
ON e1.id=e2.managerId
GROUP BY e2.managerId
Having COUNT(e2.managerId)>=5
