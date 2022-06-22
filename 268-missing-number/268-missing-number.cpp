class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // naive approach
        // sort and find first number
        // sort(nums.begin(), nums.end());
        // for (int i = 0; i < nums.size(); ++i) {
        //     if (nums[i] != i) {
        //         return i;
        //     }
        // }
        // return size since all numbers are present between 0 and n-1
        // return nums.size();
        
        // with extra memory
        // create a boolean vector of size + 1
        vector<bool> v(nums.size() + 1, false);
        // flip the boolean value for each number in nums
        for (int i = 0; i < nums.size(); ++i) {
            v[nums[i]] = true;
        }
        for (int i = 0; i < v.size(); ++i) {
            if (v[i] == false) {
                return i;
            }
        }
        return -1;
    }
};