/**
 * Problem Link : https://leetcode.com/problems/happy-number/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

class Solution {
    public boolean isHappy(int n) {
         Set<Integer> map = new HashSet<>();

        while (n != 1) {

            int sum = 0;

            while (n > 0) {

                int digit = n % 10;
                sum += digit * digit;
                n = n / 10;
            }

            n = sum;

            if (map.contains(n)) {
                return false;
            }

            map.add(n);
        }

        return true;
    
        
    }
}
