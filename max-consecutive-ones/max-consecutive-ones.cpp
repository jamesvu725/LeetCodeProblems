class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;
        int count = 0;
        int i = 0;
        // iterate through nums
        while (i < nums.size()) {
            // increment count if one is found
            if (nums[i] == 1) {
                count++;
            } else {
                // if nums[i] is 0, then update maxCount and reset count
                maxCount = max(maxCount, count);
                count = 0;
            }
            // increment index
            i++;
        }
        // update maxCount one last time and return answer
        maxCount = max(maxCount, count);
        return maxCount;
    }
};