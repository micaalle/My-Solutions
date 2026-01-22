class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int operations = 0;

        while (!isNonDecreasing(nums)) {
            int idx = 0;
            int minSum = nums[0] + nums[1];


            for (int i = 1; i + 1 < nums.size(); i++) {
                if (nums[i] + nums[i + 1] < minSum) {
                    minSum = nums[i] + nums[i + 1];
                    idx = i;
                }
            }

            nums.erase(nums.begin() + idx, nums.begin() + idx + 2);
            nums.insert(nums.begin() + idx, minSum);

            operations++;
        }

        return operations;
    }

private:
    bool isNonDecreasing(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < nums[i - 1]) return false;
        }
        return true;
    }
};
