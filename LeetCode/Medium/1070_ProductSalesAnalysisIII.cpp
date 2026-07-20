/**
 * Problem Link : https://leetcode.com/problems/product-sales-analysis-iii/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

# Write your MySQL query statement below
SELECT product_id,year AS first_year,quantity,price
FROM Sales
WHERE (product_id,year) IN (
    SELECT product_id,MIN(year) AS f_year
    FROM Sales
    GROUP BY product_id

)

