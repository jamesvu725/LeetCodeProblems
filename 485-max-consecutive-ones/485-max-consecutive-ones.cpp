class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;
        int count = 0;
        // iterate through nums
        for (int i = 0; i < nums.size(); ++i) {
            // increment count if one is found
            if (nums[i] == 1) {
                count++;
            } else {
                // if nums[i] is 0, then update maxCount and reset count
                maxCount = max(maxCount, count);
                count = 0;
            }
        }
        // update maxCount one last time and return answer
        maxCount = max(maxCount, count);
        return maxCount;
    }
};