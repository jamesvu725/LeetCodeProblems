class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // bit manipuation approach
        // time complexity: O(n), space complexity: O(1)
        // return only element if size is one
        if (nums.size() == 1) {
            return nums[0];
        }
        int ans = 0;
        // xor all numbers in nums
        for (int i = 0; i < nums.size(); ++i) {
            ans ^= nums[i];
        }
        // if a number is xor twice it becomes 0, ans is the only number not xor twice
        return ans;
    }
};