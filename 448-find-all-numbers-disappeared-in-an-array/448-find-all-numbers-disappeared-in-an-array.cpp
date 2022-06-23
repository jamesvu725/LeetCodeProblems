class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // extra vector approach
        // time complexity: O(n), space complexity: O(n)
        // vector<int> ans;
        // initialize vector with all values false
        // vector<bool> existingNum(nums.size(), false);
        // flip all exising numbers to true
        // use -1 because number range from 1 to n instead of 0 to n
        // for (int i = 0; i < nums.size(); ++i) {
        //     existingNum[nums[i] - 1] = true;
        // }
        // if index is false, then push the index into the answer vector
        // make sure to add back the 1
        // for (int i = 0; i < existingNum.size(); ++i) {
        //     if (!existingNum[i]) {
        //         ans.push_back(i + 1);
        //     }
        // }
        // return ans;
        
        // negation approach
        // time complexity: O(n), space complexity: O(1)
        vector<int> ans;
        // negate all numbers in nums at their value - 1
        // use abs just in case the number is already negated
        for (int i: nums) {
            nums[abs(i) - 1] = -abs(nums[abs(i) - 1]);
        }
        // this for loop is equivalent to the for each loop above, i is replaced with nums[i] below
        // for (int i = 0; i < nums.size(); ++i) {
        //     nums[abs(nums[i]) - 1] = -abs(nums[abs(nums[i]) - 1]);
        // }
        // all positive numbers are the missing numbers index
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] > 0) {
                ans.push_back(i + 1);
            }
        }
        return ans;
    }
};