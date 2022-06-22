class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // if nums is 1 or 0, then there is no duplicates
        if (nums.size() <= 1) {
            return false;
        }
        // use unordered set to store numbers
        unordered_set<int> hash;
        // iterate through the vector
        for (int i : nums) {
            // if number already exists in the unordered set, return true
            if (hash.count(i)) {
                return true;
            }
            // insert number into unordered set
            hash.insert(i);
        }
        // if there are no duplicates
        return false;
    }
};