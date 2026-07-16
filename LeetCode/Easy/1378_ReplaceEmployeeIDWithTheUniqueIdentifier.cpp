/**
 * Problem Link : https://leetcode.com/problems/replace-employee-id-with-the-unique-identifier/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

# Write your MySQL query statement below
SELECT eu.unique_id AS unique_id ,e.name AS name
from Employees e
LEFT JOIN EmployeeUNI eu
On e.id=eu.id

