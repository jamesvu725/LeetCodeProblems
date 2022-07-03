class Solution {
public:
    int climbStairs(int n) {
        // if 0, 1, or 2 return n
        if (n <= 2) {
            return n;
        }
        // static for memoization
        static map<int, int> values;
        auto it = values.find(n);
        if (it == values.end()) {
            values[n] = climbStairs(n - 1) + climbStairs(n - 2);
        }
        return values[n];
    }
};