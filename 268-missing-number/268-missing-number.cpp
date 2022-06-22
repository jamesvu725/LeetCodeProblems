class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // naive approach
        // sort and find first number
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != i) {
                return i;
            }
        }
        // return size since all numbers are present between 0 and n-1
        return nums.size();
    }
};