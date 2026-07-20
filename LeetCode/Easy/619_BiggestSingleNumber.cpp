/**
 * Problem Link : https://leetcode.com/problems/biggest-single-number/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

# Write your MySQL query statement below
SELECT MAX(num) AS num
FROM MyNumbers
WHERE num IN 
(
    SELECT num
    FROM MyNumbers
    GROUP BY num
    HAVING COUNT(num)=1

)

