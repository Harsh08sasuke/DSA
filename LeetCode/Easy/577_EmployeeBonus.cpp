/**
 * Problem Link : https://leetcode.com/problems/employee-bonus/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

# Write your MySQL query statement below
SELECT e.name,b.bonus
FROM Employee e
LEFT JOIN Bonus b
ON e.empId=b.empId
WHERE b.bonus<1000 OR b.bonus is NULL

