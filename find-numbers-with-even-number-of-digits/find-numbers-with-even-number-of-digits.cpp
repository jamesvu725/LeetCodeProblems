class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        int digits;
        int curNum;
        for (int i = 0; i < nums.size(); ++i) {
            curNum = nums[i];
            digits = 1;
            while (curNum >= 10) {
                curNum = curNum / 10;
                digits++;
            }
            if (digits % 2 == 0) {
                count++;
            }
        }
        return count;
    }
};