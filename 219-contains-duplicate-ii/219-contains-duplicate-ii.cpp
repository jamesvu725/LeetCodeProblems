class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // if k equals 0, then i and j are the same index
        // nums has to be 2 or more for duplicates
        if (k == 0 || nums.size() <= 1) {
            return false;
        }
        // use map to store number and index
        unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); ++i) {
            // check if number exists in map
            // check i - j <= k and return if true
            if (hash.count(nums[i]) && i - hash[nums[i]] <= k) {
                return true;
            }
            // insert index into the key value nums[i]
            hash[nums[i]] = i;
        }
        return false;
    }
};