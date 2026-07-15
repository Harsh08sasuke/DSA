/**
 * Problem Link : https://leetcode.com/problems/invalid-tweets/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

# Write your MySQL query statement below
select tweet_id from Tweets where
CHAR_LENGTH(content)>15;


