class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // if k equals 0, then i and j are the same index
        // nums has to be 2 or more for duplicates
        if (k == 0 || nums.size() <= 1) {
            return false;
        }
        unordered_multimap<int, int> hash;
        for (int i = 0; i < nums.size(); ++i) {
            hash.insert({nums[i], i});
            if (hash.count(nums[i]) > 1) {
                auto range = hash.equal_range(nums[i]);
                for (auto start = range.first; start != range.second; ++start) {
                    if (start->second != i && abs(start->second - i) <= k) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};