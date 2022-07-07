class Solution {
public:
    bool isPalindrome(int x) {
        // negatives and multiples of 10s are not palidromes
        if (x < 0 || x % 10 == 0 && x != 0) { return false; }
        int otherHalf = 0;
        // compare until halfway between the number
        while (x > otherHalf) {
            otherHalf = otherHalf * 10 + x % 10;
            x = x/10;
        }
        // if x has an even number of digits
        if (x == otherHalf) { return true; }
        // if x has an odd number of digits
        if (x == otherHalf / 10) { return true; }
        return false;
    }
};