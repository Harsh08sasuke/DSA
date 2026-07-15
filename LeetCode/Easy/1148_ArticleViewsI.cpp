/**
 * Problem Link : https://leetcode.com/problems/article-views-i/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

# Write your MySQL query statement below
Select DISTINCT author_id AS id from 
Views where author_id=viewer_id 
Order by id;
