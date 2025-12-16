class Solution {
public:
    bool check(vector<int>& nums) {

        int i = 1;
        int count = 0;
        while (i < nums.size()) {
            if (nums[i] < nums[i - 1]) {
                count++;
            }
            i++;
        }
        return (count == 0 || (count == 1 && nums[0] >= nums[nums.size() - 1]));
    }
};
