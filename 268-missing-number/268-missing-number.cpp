class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // sorting approach
        // time complexity: O(nlogn), space complexity: O(1)
        // sort(nums.begin(), nums.end());
        // for (int i = 0; i < nums.size(); ++i) {
        // return early if missing number found
        //     if (nums[i] != i) {
        //         return i;
        //     }
        // }
        // return size since all numbers are present between 0 and size - 1
        // return nums.size();
        
        // with extra vector
        // time complexity: O(n), space complexity: O(n)
        // create a boolean vector of size + 1
        // vector<bool> v(nums.size() + 1, false);
        // flip the boolean value for each number in nums
        // for (int i = 0; i < nums.size(); ++i) {
        //     v[nums[i]] = true;
        // }
        // return if false is found
        // for (int i = 0; i < v.size(); ++i) {
        //     if (v[i] == false) {
        //         return i;
        //     }
        // }
        // should never reach, -1 if error
        // return -1;
        
        // math approach
        // time complexity: O(n), space complexity: O(1)
        // int sum = 0;
        // total is the summation from 0 to size
        // int total = nums.size() * (nums.size() + 1) / 2;
        // add up sum from nums
        // for (int i: nums) {
        //     sum += i;
        // }
        // answer is missing number from total and sum
        // return total - sum;
        
        // bit manipulation approach
        // time complexity: O(n), space complexity: O(1)
        int ans = nums.size();
        for (int i = 0; i < nums.size(); ++i) {
            // xor index and value
            ans ^= i;
            ans ^= nums[i];
        }
        // same number xor equals 0
        // therefore ans should be the only number not xor
        return ans;
    }
};