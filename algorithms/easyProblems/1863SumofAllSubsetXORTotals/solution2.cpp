class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int ret = 0;
        for (int i = 1; i < 1 << nums.size(); ++i) {
            int val = 0;
            for (int j = 0; j < nums.size(); ++j) {
                if (i & (1 << j))
                    val ^= nums[j];
            }
            ret += val;
        }
        return ret;
    }
};
