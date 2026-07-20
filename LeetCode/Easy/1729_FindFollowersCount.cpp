/**
 * Problem Link : https://leetcode.com/problems/find-followers-count/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

# Write your MySQL query statement below
SELECT user_id,COUNT(DISTINCT  follower_id ) AS  followers_count
FROM Followers
GROUP BY user_id
ORDER BY follower_id desc

