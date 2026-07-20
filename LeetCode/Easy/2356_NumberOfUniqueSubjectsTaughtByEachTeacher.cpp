/**
 * Problem Link : https://leetcode.com/problems/number-of-unique-subjects-taught-by-each-teacher/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

# Write your MySQL query statement below
SELECT teacher_id,COUNT(DISTINCT subject_id) AS cnt
from Teacher
GROUP BY teacher_id
