class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // use unordered set to store numbers
        unordered_set<int> hash;
        // iterate through the vector
        for (int i : nums) {
            // insert number into hash
            // insert returns a pair with the second element containing a bool
            // if bool is false, then number already exists in hash
            // return true if number already exists
            if (!hash.insert(i).second) {
                return true;
            }
        }
        // if there are no duplicates
        return false;
    }
};