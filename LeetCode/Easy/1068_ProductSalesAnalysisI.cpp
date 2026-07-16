/**
 * Problem Link : https://leetcode.com/problems/product-sales-analysis-i/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

# Write your MySQL query statement below
SELECT p.product_name AS product_name,s.year AS year,s.price AS price
FROM SALES s
LEFT JOIN product p
on s.product_id=p.product_id
