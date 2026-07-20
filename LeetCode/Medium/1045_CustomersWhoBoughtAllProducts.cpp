/**
 * Problem Link : https://leetcode.com/problems/customers-who-bought-all-products/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

# Write your MySQL query statement below


SELECT customer_id
FROM Customer
GROUP BY customer_id
HAVING COUNT(DISTINCT product_key)=(
    SELECT COUNT(product_key)
    FROM Product 
)

