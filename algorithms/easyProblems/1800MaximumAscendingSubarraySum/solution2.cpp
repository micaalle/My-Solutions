class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int tmp = nums[0], ret = 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] < nums[i + 1]) {
                tmp += nums[i + 1];
            } else {
                if (tmp > ret)
                    ret = tmp;
                tmp = nums[i + 1];
            }
            if (tmp > ret)
                ret = tmp;
        }
        if (tmp > ret)
            ret = tmp;
        return ret;
    }
};
