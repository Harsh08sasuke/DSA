/**
 * Problem Link : https://leetcode.com/problems/classes-with-at-least-5-students/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

# Write your MySQL query statement below


SELECT class
FROM Courses
GROUP BY class
having COUNT(student)>=5
