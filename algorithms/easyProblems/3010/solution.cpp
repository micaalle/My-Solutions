class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int ret = nums[0];

        sort(nums.begin() + 1, nums.end());
        return ret += (nums[1] + nums[2]);
    }
};
