class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // extra vector approach
        vector<int> ans;
        // initialize vector with all values false
        vector<bool> existingNum(nums.size(), false);
        // flip all exising numbers to true
        // use -1 because number range from 1 to n instead of 0 to n
        for (int i = 0; i < nums.size(); ++i) {
            existingNum[nums[i]-1] = true;
        }
        // if index is false, then push the index into the answer vector
        // make sure to add back the 1
        for (int i = 0; i < existingNum.size(); ++i) {
            if (!existingNum[i]) {
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};