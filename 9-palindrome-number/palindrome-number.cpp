class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers & 0 tho end ayye non-zero numbers palindrome kadu
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int revertedNumber = 0;
        while (x > revertedNumber) {
            revertedNumber = revertedNumber * 10 + x % 10;
            x /= 10;
        }

        // Even length: x == revertedNumber
        // Odd length: x == revertedNumber / 10 (middle digit drop cheyadaniki)
        return x == revertedNumber || x == revertedNumber / 10;
    }
};